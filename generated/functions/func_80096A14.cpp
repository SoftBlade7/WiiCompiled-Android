#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096A14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80096A14;

loc_80096A14:
{
    r4 = MemoryInline::FlatRead16((r31 + 86));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 88));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r4));
}

loc_80096A20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80096A2C;
    }
}

loc_80096A24:
{
    r3 = MemoryInline::FlatRead8((r31 + 85));
    goto loc_80096A48;
}

loc_80096A2C:
{
    r5 = MemoryInline::FlatRead8((r31 + 84));
    r0 = MemoryInline::FlatRead8((r31 + 85));
    r0 = (r0 - r5);
    r0 = (r3 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r5 + r0);
    r3 = (r0 & 255);
}

loc_80096A48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 85), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r31 + 86), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r31 + 88), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r0 = ctx->gpr[0];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000FB gpr_write=0xFE00083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096A14 func_80096A14 preserves=true fpr_mask=0x00000000
