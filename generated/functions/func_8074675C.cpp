#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074675C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8074675C;

loc_8074675C:
{
    r3 = 0x808A0000u;
    f0.d = PPC_Fctiwz(f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 11216));
    r4 = 0x808D0000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3 = 0x80890000u;
    f1.d = PpcFmulsInline(f2.d, f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r4 = (r4 + -18584);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -844));
    f1.d = PPC_Fctiwz(f1.d);
    r3 = fctiwzword0;
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r0 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead8(r4_addr_0);
    r0 = fctiwzword2;
    r3 = (r4 * r3);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r3 + r0);
    r3 = (r0 & 255);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000006 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074675C func_8074675C preserves=true fpr_mask=0x00000000
