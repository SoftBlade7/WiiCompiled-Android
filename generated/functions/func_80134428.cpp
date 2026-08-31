#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80134428(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80134428;

loc_80134428:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80134434:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8013459C;
    }
}

loc_80134448:
{
    r3 = MemoryInline::FlatRead32((r13 + -29660));
    r7 = 1;
    r9 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8013458C;
}

loc_80134458:
{
    r8 = (r7 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r0 = (r0 - r8);
    r8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r8 + 1));
}

loc_80134470:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8013447C;
    }
}

loc_80134474:
{
}

loc_80134478:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80134588;
    }
}

loc_8013447C:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_80134484:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80134588;
    }
}

loc_80134488:
{
    r0 = MemoryInline::FlatRead8((r8 + 2));
}

loc_80134490:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80134588;
    }
}

loc_80134494:
{
    r8 = 0x80330000u;
    r11 = MemoryInline::FlatRead8((r3 + 1));
    r10 = MemoryInline::FlatRead8((r8 + 24600));
    r9 = (r8 + 24600);
    r31 = 0;
    r29 = 1;
    goto loc_8013450C;
}

loc_801344B0:
{
    r8 = (r29 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r0 = (r0 - r8);
    r12 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r12 + 2));
}

loc_801344C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80134508;
    }
}

loc_801344CC:
{
    r30 = 0;
    goto loc_801344FC;
}

loc_801344D4:
{
    r8 = (r30 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 2040);
    r8 = (r0 + r8);
    r0 = MemoryInline::FlatRead8(r12);
    r8 = (r9 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 7));
}

loc_801344F0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r0))) {
        goto loc_801344F8;
    }
}

loc_801344F4:
{
    r31 = 1;
}

loc_801344F8:
{
    r30 = (r30 + 1);
}

loc_801344FC:
{
    r0 = (r30 & 255);
}

loc_80134504:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r10))) {
        goto loc_801344D4;
    }
}

loc_80134508:
{
    r29 = (r29 + 1);
}

loc_8013450C:
{
    r0 = (r29 & 255);
}

loc_80134514:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r11))) {
        goto loc_801344B0;
    }
}

loc_80134518:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8013451C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80134644;
    }
}

loc_80134520:
{
    r3 = (r7 & 255);
    r30 = 0x80330000u;
    r3 = (r3 + -1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r30 = (r30 + 24168);
    r29 = (r0 + r3);
    r31 = (r30 + r29);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r31 + 7), static_cast<uint8_t>(r5));
    r3 = r31;
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r31 + 6), static_cast<uint8_t>(r4));
    r4 = r6;
    // inline leaf 0x80131D90 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131D90
    r0 = MemoryInline::FlatRead8((r13 + -26128));
    r3 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r31 + 8), static_cast<uint8_t>(r3));
    r7 = r31;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80134564:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80134644;
    }
}

loc_80134568:
{
    r4 = 0x80280000u;
    r5 = MemoryInline::FlatRead8((r31 + 7));
    r6 = MemoryInline::FlatRead8((r31 + 6));
    r4 = (r4 + 10636);
    r7 = MemoryInline::FlatRead8((r7 + 8));
    r3 = 1283;
    ctx->lr = 0x80134584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80134644;
}

loc_80134588:
{
    r7 = (r7 + 1);
}

loc_8013458C:
{
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
}

loc_80134594:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80134458;
    }
}

loc_80134598:
{
    goto loc_80134644;
}

loc_8013459C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801345A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80134644;
    }
}

loc_801345A4:
{
    r7 = MemoryInline::FlatRead32((r13 + -29660));
    r8 = 1;
    r6 = MemoryInline::FlatRead8((r7 + 1));
    goto loc_80134638;
}

loc_801345B4:
{
    r3 = (r8 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 1020);
    r0 = (r0 - r3);
    r3 = (r7 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_801345CC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_801345D8;
    }
}

loc_801345D0:
{
}

loc_801345D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80134634;
    }
}

loc_801345D8:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801345E0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80134634;
    }
}

loc_801345E4:
{
    r3 = (r8 & 255);
    r0 = MemoryInline::FlatRead8((r13 + -26128));
    r5 = (r3 + -1);
    r3 = 0x80330000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801345F8:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r0 = (r4 + r5);
    r3 = (r3 + 24168);
    r3 = (r3 + r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80134644;
    }
}

loc_80134614:
{
    r4 = 0x80280000u;
    r5 = MemoryInline::FlatRead8((r3 + 7));
    r6 = MemoryInline::FlatRead8((r3 + 6));
    r4 = (r4 + 10696);
    r7 = MemoryInline::FlatRead8((r3 + 8));
    r3 = 1283;
    ctx->lr = 0x80134630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80134644;
}

loc_80134634:
{
    r8 = (r8 + 1);
}

loc_80134638:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_80134640:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801345B4;
    }
}

loc_80134644:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80134428 func_80134428 preserves=true fpr_mask=0x00000000
