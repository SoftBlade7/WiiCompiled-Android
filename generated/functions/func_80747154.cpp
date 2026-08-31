#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80747154(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80747154;

loc_80747154:
{
    r4 = 0x808A0000u;
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 11268));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -848));
    r3 = 0x808D0000u;
    r0 = MemoryInline::FlatRead16((r3 + -18678));
    r3 = 0x809C0000u;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11272));
    r3 = (r3 + 11320);
    r0 = (r0 | 12);
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80747154 func_80747154 preserves=true fpr_mask=0x00000000
