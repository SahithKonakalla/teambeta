#include <iostream>

TargetProcessor::getValues() {
  maxX = target->getMaxX();
  minX = target->getMinX();
  maxY = target->getMaxY();
  minY = target->getMinY();
  width = target->getWidth();
  height = target->getHeight();
  imageWidth = target->getImageWidth();
}

TargetProcessor::getCenterX() {
  centerX = (maxX + minX)/2;

  return centerX;
}

TargetProcessor::getCenterY() {
  centerY = (maxY+ minY)/2;

  return centerY;
}

TargetProcessor::calcDistance() {
  float focalLength = 15.118110236;
  float realWidth = 26.94;
  double distance = (focalLength * realWidth)/width;

  return distance;
}

TargetProcessor::calcAzimuthX() {
  centerX = getCenterX();
  double cent2cent = imageWidth - centerX;
  double distance = calcDistance();
  double angleX = atan(cent2cent/distance) * 180 / 3.14159;

  return angleX;
}

TargetProcessor::calcAzimuthY() {
    centerY = getCenterY();
    double cent2cent = imageWidth - centerY;
    double distance = calcDistance();
    double angleY = atan(cent2cent/distance) * 180 / 3.14159;

    return angleY;
  }
