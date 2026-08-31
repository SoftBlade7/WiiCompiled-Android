#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801998A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801998A4;

loc_801998A4:
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
    r8 = (r3 + 3);
    r0 = (r4 + r3);
    r31 = (r8 & -4);
    r8 = (r0 & -4);
    r0 = (r31 - r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801998D8;
    }
}

loc_801998D0:
{
    r3 = 0;
    goto loc_801999E8;
}

loc_801998D8:
{
    r30 = (r31 + 60);
    r0 = (r6 + -1);
    r3 = (r30 + r6);
    r4 = (r6 + r5);
    r5 = ~(r0 | r0);
    r0 = (r3 + 7);
    r3 = (r4 + -1);
    r28 = (r5 & r0);
    r0 = (r28 - r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r27 = (r5 & r3);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019990C;
    }
}

loc_80199904:
{
    r3 = 0;
    goto loc_801999E8;
}

loc_8019990C:
{
    r0 = (r8 - r28);
    r29 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80199920;
    }
}

loc_80199918:
{
    r3 = 0;
    goto loc_801999E8;
}

loc_80199920:
{
    r0 = (r29 * r27);
    r4 = 1431175168;
    r3 = r31;
    r5 = r28;
    r4 = (r4 + 21576);
    r6 = (r0 + r28);
    ctx->lr = 0x8019993Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019832Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r29 + -1);
    MemoryInline::FlatWrite32(r30, r28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(0));
}

loc_80199948:
{
    MemoryInline::FlatWrite32((r30 + 4), r27);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801999DC;
    }
}

loc_80199950:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80199954:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801999C8;
    }
}

loc_8019995C:
{
    r0 = (r27 + r28);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8019995C;
    }
}

loc_801999C0:
{
    r3 = (r3 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801999C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801999DC;
    }
}

loc_801999C8:
{
    ctr = r3;
}

loc_801999CC:
{
    r0 = (r27 + r28);
    MemoryInline::FlatWrite32(r28, r0);
    r28 = r0;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801999CC;
    }
}

loc_801999DC:
{
    r0 = 0;
    r3 = r31;
    MemoryInline::FlatWrite32(r28, r0);
}

loc_801999E8:
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
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF6FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801998A4 func_801998A4 preserves=true fpr_mask=0x00000000
