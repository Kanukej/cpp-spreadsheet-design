#pragma once

#include "common.h"
#include "formula.h"

class Cell : public CellInterface {
public:
    Cell();
    explicit Cell(std::string text);
    ~Cell();

    void Set(std::string text);
    void Clear();

    Value GetValue(CacheInterface& cache) const override;
    std::string GetText() const override;

private:
    class Impl;
    class EmptyImpl;
    class TextImpl;
    class FormulaImpl;
    std::unique_ptr<Impl> impl_;
};
