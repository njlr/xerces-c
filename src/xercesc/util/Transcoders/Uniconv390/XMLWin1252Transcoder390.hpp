/*
 * The Apache Software License, Version 1.1
 *
 * Copyright (c) 2004 The Apache Software Foundation.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by the
 *        Apache Software Foundation (http://www.apache.org/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "Xerces" and "Apache Software Foundation" must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact apache\@apache.org.
 *
 * 5. Products derived from this software may not be called "Apache",
 *    nor may "Apache" appear in their name, without prior written
 *    permission of the Apache Software Foundation.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 *
 * This software consists of voluntary contributions made by many
 * individuals on behalf of the Apache Software Foundation, and was
 * originally based on software copyright (c) 1999, International
 * Business Machines, Inc., http://www.ibm.com .  For more information
 * on the Apache Software Foundation, please see
 * <http://www.apache.org/>.
 */

/*
 * $Log$
 * Revision 1.2  2004/04/22 22:46:46  neilg
 * not all 390 processors support the new transcoding instructions; this patch makes Xerces work there as well.  Thanks to Steve Dulin
 *
 * Revision 1.1  2004/02/06 15:02:11  cargilld
 * Intrinsic transcoding support for 390.
 *
 */

#ifndef XMLWIN1252TRANSCODER390_HPP
#define XMLWIN2152TRANSCODER390_HPP

#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/util/Transcoders/Uniconv390/XML256TableTranscoder390.hpp>

XERCES_CPP_NAMESPACE_BEGIN


//
//  This class provides an implementation of the XMLTranscoder interface
//  for the Windows variant of Latin1, called Windows-1252. Its close to
//  Latin1, but is somewhat different.
//
class XMLUTIL_EXPORT XMLWin1252Transcoder390 : public XML256TableTranscoder390
{
public :
    // -----------------------------------------------------------------------
    //  Public constructors and destructor
    // -----------------------------------------------------------------------
    XMLWin1252Transcoder390
    (
        const   XMLCh* const    encodingName
        , const unsigned int    blockSize
        , MemoryManager* const  manager = XMLPlatformUtils::fgMemoryManager
    );

    virtual ~XMLWin1252Transcoder390();


private :
    // -----------------------------------------------------------------------
    //  Unimplemented constructors and operators
    // -----------------------------------------------------------------------
    XMLWin1252Transcoder390();
    XMLWin1252Transcoder390(const XMLWin1252Transcoder390&);
    XMLWin1252Transcoder390& operator=(const XMLWin1252Transcoder390&);
};

XERCES_CPP_NAMESPACE_END

#endif