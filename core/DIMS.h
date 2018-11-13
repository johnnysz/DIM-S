//
//  DIMS.h
//  DIMS
//
//  Created by SZ Johnny on 2018/11/12.
//  Copyright © 2018 DIM Group. All rights reserved.
//

#ifndef DIMS_H
#define DIMS_H

class DIMS {
  public:
    int Register(...); //register client address
    
    int ShakeHand(...); //shake hand with client
    
    int Recieve(...); //recieve something from sb
    
    int Send(...); //send something to somebody
    
  private:
    int BroadCast(...); //broadcast sb's address 
    
};

#endif
