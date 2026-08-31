#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D3EA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D3EA8;

loc_801D3EA8:
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
    r0 = MemoryInline::FlatRead32(r3);
    r7 = (r5 + r6);
    r30 = r3;
    r27 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_801D3ED0:
{
    r28 = r5;
    r29 = r6;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801D3FD0;
    }
}

loc_801D3EDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801D3EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3FC8;
    }
}

loc_801D3EE4:
{
}

loc_801D3EE8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1024))) {
        goto loc_801D3F20;
    }
}

loc_801D3EEC:
{
    r0 = (1024 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1024) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r31 = r29;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_801D3EF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D3F00;
    }
}

loc_801D3EFC:
{
    r31 = r0;
}

loc_801D3F00:
{
    r4 = (r30 + r5);
    r3 = r27;
    r5 = r31;
    r4 = (r4 + 56);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D54E8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + r31);
    r29 = (r29 - r31);
    r27 = (r27 + r31);
}

loc_801D3F20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801D3F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3FC8;
    }
}

loc_801D3F28:
{
    r28 = (r28 + -1024);
    r30 = MemoryInline::FlatRead32((r30 + 52));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r28);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(9) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r28) >> 9);
    r28 = (r28 & 511);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801D3FC0;
    }
}

loc_801D3F3C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_801D3F40:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D3F74;
    }
}

loc_801D3F48:
{
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    r30 = MemoryInline::FlatRead32(r30);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3F48;
    }
}

loc_801D3F6C:
{
    r3 = (r3 & 7);
}

loc_801D3F70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801D3FC0;
    }
}

loc_801D3F74:
{
    ctr = r3;
}

loc_801D3F78:
{
    r30 = MemoryInline::FlatRead32(r30);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3F78;
    }
}

loc_801D3F80:
{
    goto loc_801D3FC0;
}

loc_801D3F84:
{
    r0 = (512 - r28);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(512) >= static_cast<uint32_t>(r28) ? 1u : 0u) << 29);
    r31 = r29;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_801D3F90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801D3F98;
    }
}

loc_801D3F94:
{
    r31 = r0;
}

loc_801D3F98:
{
    r4 = (r30 + r28);
    r3 = r27;
    r5 = r31;
    r4 = (r4 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801D54E8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = (r28 + r31);
    r30 = MemoryInline::FlatRead32(r30);
    r28 = (r28 & 511);
    r29 = (r29 - r31);
    r27 = (r27 + r31);
}

loc_801D3FC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_801D3FC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D3F84;
    }
}

loc_801D3FC8:
{
    r3 = 1;
    goto loc_801D3FD4;
}

loc_801D3FD0:
{
    r3 = 0;
}

loc_801D3FD4:
{
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
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007B gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D3EA8 func_801D3EA8 preserves=true fpr_mask=0x00000000
