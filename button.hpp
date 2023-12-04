#pragma once

#include <QToolButton>

class Button : public QToolButton
{
    Q_OBJECT

public:
    explicit Button(const QString &text, QWidget *parent = nullptr);

    virtual ~Button() = default;

    QSize sizeHint() const override;
};
