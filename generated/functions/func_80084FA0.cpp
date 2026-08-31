#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80084FA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80085018_loc_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_80084FA0;

loc_80084FA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    r4 = (r1 + 10);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_0 & 255);
    r0 = (r0 & -2139095041);
    r3 = (r3 + -127);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r3));
    r0 = (r0 | 1065353216);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    // psq_load w=1 quant=5 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 5u>(ctx, r4));
    r3 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28976));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28980));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r3, PPC_PsFromScalarInline(f2.d));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 3u>(ctx, r3));
    r4 = 0x80270000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28988));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r4 = (r4 + 14656);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f1.d)));
    r3 = (r4 + r0);
    addr_lfsx_80085018_loc_0 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80085018_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f3.d));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80084FA0 func_80084FA0 preserves=true fpr_mask=0x00000000
