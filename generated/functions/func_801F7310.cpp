#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F7310(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F7310;

loc_801F7310:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = MemoryInline::FlatRead8(r4);
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r7 & 64);
}

loc_801F7328:
{
    r6 = MemoryInline::FlatRead8((r4 + 13));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F7358;
    }
}

loc_801F734C:
{
    r0 = (r7 & -65);
    r31 = 1;
    r7 = (r0 & 255);
}

loc_801F7358:
{
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_801F7360:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801F737C;
    }
}

loc_801F7364:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 523), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 524), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 522), static_cast<uint8_t>(r0));
    r3 = 33;
    goto loc_801F7510;
}

loc_801F737C:
{
}

loc_801F7380:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801F73A0;
    }
}

loc_801F7384:
{
}

loc_801F7388:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801F73B8;
    }
}

loc_801F738C:
{
    r5 = MemoryInline::FlatRead8((r3 + 523));
    r8 = 0;
    r0 = (r5 + 1);
    r5 = (r0 & 255);
    goto loc_801F73B8;
}

loc_801F73A0:
{
}

loc_801F73A4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801F73B8;
    }
}

loc_801F73A8:
{
    r5 = MemoryInline::FlatRead8((r3 + 523));
    r8 = 0;
    r0 = (r5 + -1);
    r5 = (r0 & 255);
}

loc_801F73B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801F73BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F73CC;
    }
}

loc_801F73C0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 522), static_cast<uint8_t>(r0));
    goto loc_801F7410;
}

loc_801F73CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 522));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F73D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F73E0;
    }
}

loc_801F73D8:
{
    r3 = 33;
    goto loc_801F7510;
}

loc_801F73E0:
{
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_801F73E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F73F8;
    }
}

loc_801F73EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 524));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F73F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7410;
    }
}

loc_801F73F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 523), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 524), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 522), static_cast<uint8_t>(r0));
    r3 = 33;
    goto loc_801F7510;
}

loc_801F7410:
{
    r5 = (r7 & 255);
    MemoryInline::FlatWrite8((r3 + 523), static_cast<uint8_t>(r7));
    r0 = (r5 + -1);
    r4 = (r4 + 1);
    r0 = (r0 * 26);
    MemoryInline::FlatWrite8((r3 + 524), static_cast<uint8_t>(r6));
    r5 = 10;
    r28 = (r3 + r0);
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r28 + 10);
    r4 = (r30 + 14);
    r5 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r28 + 22);
    r4 = (r30 + 28);
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = r28;
    r4 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF6DCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r28 + 10);
    r4 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF6DCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r28 + 22);
    r4 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801EF6DCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F7480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7500;
    }
}

loc_801F7484:
{
    r4 = (r28 + 26);
    r3 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r28 + 26), static_cast<uint16_t>(r3));
    r0 = (r0 - r28);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    ctr = r0;
}

loc_801F74A4:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r4))) {
        goto loc_801F74C4;
    }
}

loc_801F74A8:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_801F74B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F74BC;
    }
}

loc_801F74B4:
{
    r28 = (r28 + 2);
    goto loc_801F74C4;
}

loc_801F74BC:
{
    r28 = (r28 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F74A8;
    }
}

loc_801F74C4:
{
    r0 = (r4 + 1);
    r0 = (r0 - r28);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
}

loc_801F74D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F7500;
    }
}

loc_801F74DC:
{
    r0 = MemoryInline::FlatRead16(r28);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F74E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F74F8;
    }
}

loc_801F74E8:
{
    r0 = 0;
    r3 = 33;
    MemoryInline::FlatWrite8((r29 + 522), static_cast<uint8_t>(r0));
    goto loc_801F7510;
}

loc_801F74F8:
{
    r28 = (r28 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F74DC;
    }
}

loc_801F7500:
{
    r4 = MemoryInline::FlatRead8((r29 + 522));
    r3 = 0;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 522), static_cast<uint8_t>(r0));
}

loc_801F7510:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F7310 func_801F7310 preserves=true fpr_mask=0x00000000
