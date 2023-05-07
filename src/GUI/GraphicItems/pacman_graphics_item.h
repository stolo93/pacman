/**
 * @file pacman_graphics_item.h
 * @author Samuel Stolarik
 * @date 2023-04-28
 * Project - ICP - project PacMan
 */

#ifndef PACMAN_PACMANGRAPHICSITEM_H
#define PACMAN_PACMANGRAPHICSITEM_H

#include <QGraphicsItem>
#include <QPainter>
#include <QPixmap>
#include <memory>

// TODO change picture paths
namespace view
{

class PacmanGraphicsItem : public QGraphicsItem
{
public:
    QRectF boundingRect() const override;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
    std::unique_ptr<QPixmap> icon {};
    uint32_t width = 1;
    uint32_t height = 1;
};


class GraphicsItemPacman : public PacmanGraphicsItem
{
public:
    explicit GraphicsItemPacman(const QString &picture_path = ":img/resources/game_objects/src.png");
};


class GraphicsItemGhost : public PacmanGraphicsItem
{
public:
    explicit GraphicsItemGhost(const QString &picture_path = ":img/resources/game_objects/ghost.png");
};


class GraphicsItemWall : public PacmanGraphicsItem
{
public:
    explicit GraphicsItemWall(const QString &picture_path = ":img/resources/game_objects/wall.png");
};


class GraphicsItemTarget : public PacmanGraphicsItem
{
public:
    explicit GraphicsItemTarget(const QString &picture_path = ":img/resources/game_objects/target.png");
};


class GraphicsItemKey : public PacmanGraphicsItem
{
public:
    explicit GraphicsItemKey(const QString &picture_path = ":img/resources/game_objects/key.png");
};


}    // namespace view

#endif    // PACMAN_PACMANGRAPHICSITEM_H