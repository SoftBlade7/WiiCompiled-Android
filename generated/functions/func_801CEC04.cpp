#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CEC04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801CEC04;

loc_801CEC04:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r30 = 0x80350000u;
    r27 = r3;
    r30 = (r30 + 16608);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    r28 = r30;
    r31 = 0;
}

loc_801CEC34:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r4 = (r27 + 64);
    r5 = 6;
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CEC4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CECEC;
    }
}

loc_801CEC50:
{
    r28 = (r31 * 12);
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r5 = 6;
    r3 = MemoryInline::FlatRead32(r3);
    r4 = (r30 + r28);
    r31 = (r4 + 28);
    r4 = MemoryInline::FlatRead32((r4 + 28));
    r3 = (r3 + 64);
    r4 = (r4 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CEC7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CECFC;
    }
}

loc_801CEC80:
{
    r28 = (r30 + r28);
    r5 = 6;
    r0 = MemoryInline::FlatRead32((r28 + 36));
    r3 = MemoryInline::FlatRead32((r28 + 32));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r4 = MemoryInline::FlatRead32((r30 + 24));
    r3 = MemoryInline::FlatRead32(r31);
    r6 = MemoryInline::FlatRead32(r4);
    r4 = (r3 + 64);
    r3 = (r6 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801CECB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801CECC0;
    }
}

loc_801CECB4:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
    MemoryInline::FlatWriteRam32((r30 + 24), r0);
    goto loc_801CECCC;
}

loc_801CECC0:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
    r3 = MemoryInline::FlatRead32((r28 + 36));
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_801CECCC:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 36), r3);
    r3 = MemoryInline::FlatRead32((r30 + 20));
    MemoryInline::FlatWrite32((r3 + 4), r31);
    MemoryInline::FlatWriteRam32((r30 + 20), r31);
    MemoryInline::FlatWrite32((r28 + 32), r0);
    goto loc_801CECFC;
}

loc_801CECEC:
{
    r31 = (r31 + 1);
    r28 = (r28 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(6));
}

loc_801CECF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801CEC34;
    }
}

loc_801CECFC:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801CEC04 func_801CEC04 preserves=true fpr_mask=0x00000000
