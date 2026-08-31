#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130100(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80130100;

loc_80130100:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = 0x80310000u;
    r0 = 0;
    r5 = MemoryInline::FlatRead8((r30 + -26176));
    r31 = (r30 + -26176);
    r4 = (r31 + 196608);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r5 = (r31 + r5);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    r3 = MemoryInline::FlatRead8((r30 + -26176));
    r3 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + -26176), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + -30718), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + -26176));
    r3 = (r3 + -1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    MemoryInline::FlatWriteRam8((r30 + -26176), static_cast<uint8_t>(r3));
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80130184;
}

loc_80130168:
{
    r3 = MemoryInline::FlatRead8((r30 + -26176));
    r3 = (r3 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    MemoryInline::FlatWriteRam8((r30 + -26176), static_cast<uint8_t>(r3));
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80130184:
{
    r0 = MemoryInline::FlatRead8((r30 + -26176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013018C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80130168;
    }
}

loc_80130190:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80130100 func_80130100 preserves=true fpr_mask=0x00000000
