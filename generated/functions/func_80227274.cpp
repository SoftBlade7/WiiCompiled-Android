#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227274(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227274;

loc_80227274:
{
    r7 = 0;
    r6 = 0;
    goto loc_802272A8;
}

loc_80227280:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r7 = (r7 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    r5_addr_2 = (r5 + r6);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    r5 = MemoryInline::FlatRead32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r5_addr_3 = (r5 + r6);
    r5 = MemoryInline::FlatRead32(r5_addr_3);
    r6 = (r6 + 4);
    MemoryInline::FlatWriteFloat32((r5 + 20), f0.d);
}

loc_802272A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_802272B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80227280;
    }
}

loc_802272B4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227274 func_80227274 preserves=true fpr_mask=0x00000000
