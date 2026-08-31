#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80642070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80642070;

loc_80642070:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r6 = MemoryInline::FlatRead32((r3 + 100));
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r3 = MemoryInline::FlatRead32((r6 + 12));
    r30 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_806420A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806420AC;
    }
}

loc_806420A4:
{
    r30 = 0;
    goto loc_80642100;
}

loc_806420AC:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7312);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806420FC;
    }
}

loc_806420B8:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x806420CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806420E4;
}

loc_806420D0:
{
}

loc_806420D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_806420E0;
    }
}

loc_806420D8:
{
    r0 = 1;
    goto loc_806420F0;
}

loc_806420E0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806420E4:
{
}

loc_806420E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806420D0;
    }
}

loc_806420EC:
{
    r0 = 0;
}

loc_806420F0:
{
}

loc_806420F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806420FC;
    }
}

loc_806420F8:
{
    goto loc_80642100;
}

loc_806420FC:
{
    r30 = 0;
}

loc_80642100:
{
    r4 = 0;
    r3 = (r27 + 372);
}

loc_8064210C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r28))) {
        goto loc_80642130;
    }
}

loc_80642110:
{
    r0 = MemoryInline::FlatRead32((r30 + 84));
}

loc_80642118:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80642130;
    }
}

loc_8064211C:
{
    r0 = MemoryInline::FlatRead32((r30 + 88));
}

loc_80642124:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_80642130;
    }
}

loc_80642128:
{
    r4 = 1;
    goto loc_806421DC;
}

loc_80642130:
{
    r0 = 1;
}

loc_80642138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r28))) {
        goto loc_8064215C;
    }
}

loc_8064213C:
{
    r0 = MemoryInline::FlatRead32((r30 + 176));
}

loc_80642144:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8064215C;
    }
}

loc_80642148:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
}

loc_80642150:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_8064215C;
    }
}

loc_80642154:
{
    r4 = 1;
    goto loc_806421DC;
}

loc_8064215C:
{
    r0 = 2;
}

loc_80642164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r28))) {
        goto loc_80642188;
    }
}

loc_80642168:
{
    r0 = MemoryInline::FlatRead32((r30 + 268));
}

loc_80642170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80642188;
    }
}

loc_80642174:
{
    r0 = MemoryInline::FlatRead32((r30 + 272));
}

loc_8064217C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_80642188;
    }
}

loc_80642180:
{
    r4 = 1;
    goto loc_806421DC;
}

loc_80642188:
{
    r0 = 3;
}

loc_80642190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r28))) {
        goto loc_806421B4;
    }
}

loc_80642194:
{
    r0 = MemoryInline::FlatRead32((r30 + 360));
}

loc_8064219C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_806421B4;
    }
}

loc_806421A0:
{
    r0 = MemoryInline::FlatRead32((r30 + 364));
}

loc_806421A8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_806421B4;
    }
}

loc_806421AC:
{
    r4 = 1;
    goto loc_806421DC;
}

loc_806421B4:
{
    r0 = 4;
}

loc_806421BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r28))) {
        goto loc_806421DC;
    }
}

loc_806421C0:
{
    r0 = MemoryInline::FlatRead32((r30 + 452));
}

loc_806421C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_806421DC;
    }
}

loc_806421CC:
{
    r0 = MemoryInline::FlatRead32((r30 + 456));
}

loc_806421D4:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(r0))) {
        goto loc_806421DC;
    }
}

loc_806421D8:
{
    r4 = 1;
}

loc_806421DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806421E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806422A0;
    }
}

loc_806421E4:
{
}

loc_806421E8:
{
    r30 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_806421FC;
    }
}

loc_806421F0:
{
}

loc_806421F4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_80642210;
    }
}

loc_806421F8:
{
    goto loc_80642220;
}

loc_806421FC:
{
    r3 = (r27 + 152);
    r4 = 1;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r30 = r3;
    goto loc_80642220;
}

loc_80642210:
{
    r3 = (r27 + 152);
    r4 = 2;
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r30 = r3;
}

loc_80642220:
{
    r0 = MemoryInline::FlatRead32((r30 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80642228:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80642238;
    }
}

loc_8064222C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80642230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064228C;
    }
}

loc_80642234:
{
    goto loc_806422A0;
}

loc_80642238:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r4 = (r3 & 65535);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat64((r3 + -29568));
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 60));
    r4 = 3;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + -29576));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x80642288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806422A0;
}

loc_8064228C:
{
    r4 = 0x808A0000u;
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -29580));
    r4 = 3;
    ctx->lr = 0x806422A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806422A0:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80642070 func_80642070 preserves=true fpr_mask=0x00000000
