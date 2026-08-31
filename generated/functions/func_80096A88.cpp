#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096A88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80096A88;

loc_80096A88:
{
    r5 = MemoryInline::FlatRead16((r31 + 92));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r31 + 94));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80096A94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80096AA4;
    }
}

loc_80096A98:
{
    r0 = MemoryInline::FlatRead8((r31 + 91));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80096AC8;
}

loc_80096AA4:
{
    r8 = MemoryInline::FlatRead8((r31 + 90));
    r0 = MemoryInline::FlatRead8((r31 + 91));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r3);
    r0 = (r4 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r8 + r0);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80096AC8:
{
    r3 = (r6 + -64);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 90), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 91), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r31 + 92), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r31 + 94), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r0 = ctx->gpr[0];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800001FA gpr_write=0xFE00093B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096A88 func_80096A88 preserves=true fpr_mask=0x00000000
