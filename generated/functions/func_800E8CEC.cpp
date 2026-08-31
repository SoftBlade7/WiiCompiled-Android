#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800E8CEC;

loc_800E8CEC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26856));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E8CF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800E8CF8:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r5 = (r5_rot_0 & 16320);
    r4 = 0;
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r0 = MemoryInline::FlatRead32((r13 + -26856));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 16), r4);
    r0 = MemoryInline::FlatRead32((r13 + -26856));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r0 = MemoryInline::FlatRead32((r13 + -26856));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    r0 = MemoryInline::FlatRead32((r13 + -26856));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r13 + -26856));
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 29));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E8D48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E8D54;
    }
}

loc_800E8D4C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
}

loc_800E8D54:
{
    r0 = MemoryInline::FlatRead32((r13 + -26856));
    r4 = 0;
    r3 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002029 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E8CEC func_800E8CEC preserves=true fpr_mask=0x00000000
