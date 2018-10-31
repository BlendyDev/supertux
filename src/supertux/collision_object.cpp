//  SuperTux
//  Copyright (C) 2018 Ingo Ruhnke <grumbel@gmail.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "supertux/collision_object.hpp"

#include "supertux/moving_object.hpp"

CollisionObject::CollisionObject(CollisionGroup group, MovingObject& parent) :
  m_parent(parent),
  m_bbox(),
  m_movement(),
  m_group(group),
  m_dest()
{
}

void
CollisionObject::collision_solid(const CollisionHit& hit)
{
  m_parent.collision_solid(hit);
}

bool
CollisionObject::collides(GameObject& other, const CollisionHit& hit) const
{
  return m_parent.collides(other, hit);
}

HitResponse
CollisionObject::collision(GameObject& other, const CollisionHit& hit)
{
  return m_parent.collision(other, hit);
}

void
CollisionObject::collision_tile(uint32_t tile_attributes)
{
  m_parent.collision_tile(tile_attributes);
}

/* EOF */