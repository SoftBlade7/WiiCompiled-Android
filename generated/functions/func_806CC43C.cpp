#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CC43C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CC43C;

loc_806CC43C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 314), static_cast<uint8_t>(r0));
    r7 = 0;
    r8 = 0;
    r5 = 0;
    r4 = 255;
    goto loc_806CC47C;
}

loc_806CC458:
{
    r6 = MemoryInline::FlatRead32((r3 + 224));
    r7 = (r7 + 1);
    r6_addr_2 = (r6 + r8);
    r6 = MemoryInline::FlatRead32(r6_addr_2);
    r8 = (r8 + 4);
    MemoryInline::FlatWrite16((r6 + 216), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r6 + 212), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 213), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 214), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 215), static_cast<uint8_t>(r4));
}

loc_806CC47C:
{
    r0 = MemoryInline::FlatRead8((r3 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_806CC484:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CC458;
    }
}

loc_806CC488:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F8 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806CC43C func_806CC43C preserves=true fpr_mask=0x00000000
