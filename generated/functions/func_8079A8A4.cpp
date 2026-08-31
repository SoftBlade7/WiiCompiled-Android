#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079A8A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8079A8A4;

loc_8079A8A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 13856));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079A8C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079AB4C;
    }
}

loc_8079A8C4:
{
    r3 = 44;
    ctx->lr = 0x8079A8CCu;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079A8D0:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079AB44;
    }
}

loc_8079A8D8:
{
    ctx->lr = 0x8079A8DCu;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808D0000u;
    r3 = 21;
    r4 = (r4 + 6512);
    MemoryInline::FlatWriteRam32(r31, r4);
    ctx->lr = 0x8079A8F0u;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r4 + 13860), r3);
    r3 = 288;
    ctx->lr = 0x8079A900u;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r31 + 20), r3);
    r3 = 288;
    ctx->lr = 0x8079A90Cu;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r31 + 36), r3);
    r3 = 2592;
    ctx->lr = 0x8079A918u;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r31 + 24), r3);
    r3 = 2592;
    ctx->lr = 0x8079A924u;
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r31 + 40), r3);
    r4 = 255;
    r0 = 3;
    r3 = 0;
    r11 = MemoryInline::FlatRead32((r31 + 20));
    r10 = 0;
    MemoryInline::FlatWriteRam8((r31 + 16), static_cast<uint8_t>(r4));
    r12 = r11;
    MemoryInline::FlatWriteRam8((r31 + 17), static_cast<uint8_t>(r3));
    ctr = r0;
}

loc_8079A94C:
{
    r9 = (r10 + 1);
    guest_range_0 = MemoryInline::ResolveRangeHost(r12, 0, 93u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r12, static_cast<uint8_t>(r9));
    r8 = (r10 + 2);
    r7 = (r10 + 3);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r12 + 4), static_cast<uint8_t>(r8));
    r6 = (r10 + 4);
    r5 = (r10 + 5);
    r4 = (r10 + 6);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r12 + 8), static_cast<uint8_t>(r7));
    r3 = (r10 + 7);
    r0 = (r10 + 8);
    r9 = (r10 + 9);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r12 + 12), static_cast<uint8_t>(r6));
    r8 = (r10 + 10);
    r7 = (r10 + 11);
    r6 = (r10 + 12);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r12 + 16), static_cast<uint8_t>(r5));
    r5 = (r10 + 13);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r12 + 20), static_cast<uint8_t>(r4));
    r4 = (r10 + 14);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r12 + 24), static_cast<uint8_t>(r3));
    r3 = (r10 + 15);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r12 + 28), static_cast<uint8_t>(r0));
    r0 = (r10 + 16);
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r12 + 32), static_cast<uint8_t>(r9));
    r9 = (r10 + 17);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r12 + 36), static_cast<uint8_t>(r8));
    r8 = (r10 + 18);
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r12 + 40), static_cast<uint8_t>(r7));
    r7 = (r10 + 19);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r12 + 44), static_cast<uint8_t>(r6));
    r6 = (r10 + 20);
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r12 + 48), static_cast<uint8_t>(r5));
    r5 = (r10 + 21);
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r12 + 52), static_cast<uint8_t>(r4));
    r4 = (r10 + 22);
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r12 + 56), static_cast<uint8_t>(r3));
    r3 = (r10 + 23);
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r12 + 60), static_cast<uint8_t>(r0));
    r0 = (r10 + 24);
    r10 = (r10 + 24);
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r12 + 64), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r12 + 68), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r12 + 72), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 76u, (r12 + 76), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r12 + 80), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r12 + 84), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r12 + 88), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r12 + 92), static_cast<uint8_t>(r0));
    r12 = (r12 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8079A94C;
    }
}

loc_8079AA18:
{
    r4 = 255;
    MemoryInline::FlatWrite8((r11 + 284), static_cast<uint8_t>(r4));
    r0 = 3;
    r3 = 0;
    r11 = MemoryInline::FlatRead32((r31 + 36));
    r10 = 0;
    MemoryInline::FlatWriteRam8((r31 + 32), static_cast<uint8_t>(r4));
    r12 = r11;
    MemoryInline::FlatWriteRam8((r31 + 33), static_cast<uint8_t>(r3));
    ctr = r0;
}

loc_8079AA40:
{
    r9 = (r10 + 1);
    guest_range_1 = MemoryInline::ResolveRangeHost(r12, 0, 93u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r12, static_cast<uint8_t>(r9));
    r8 = (r10 + 2);
    r7 = (r10 + 3);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r12 + 4), static_cast<uint8_t>(r8));
    r6 = (r10 + 4);
    r5 = (r10 + 5);
    r4 = (r10 + 6);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r12 + 8), static_cast<uint8_t>(r7));
    r3 = (r10 + 7);
    r0 = (r10 + 8);
    r9 = (r10 + 9);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r12 + 12), static_cast<uint8_t>(r6));
    r8 = (r10 + 10);
    r7 = (r10 + 11);
    r6 = (r10 + 12);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r12 + 16), static_cast<uint8_t>(r5));
    r5 = (r10 + 13);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r12 + 20), static_cast<uint8_t>(r4));
    r4 = (r10 + 14);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r12 + 24), static_cast<uint8_t>(r3));
    r3 = (r10 + 15);
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r12 + 28), static_cast<uint8_t>(r0));
    r0 = (r10 + 16);
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r12 + 32), static_cast<uint8_t>(r9));
    r9 = (r10 + 17);
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r12 + 36), static_cast<uint8_t>(r8));
    r8 = (r10 + 18);
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r12 + 40), static_cast<uint8_t>(r7));
    r7 = (r10 + 19);
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r12 + 44), static_cast<uint8_t>(r6));
    r6 = (r10 + 20);
    MemoryInline::WriteResolved8(guest_range_1, 48u, (r12 + 48), static_cast<uint8_t>(r5));
    r5 = (r10 + 21);
    MemoryInline::WriteResolved8(guest_range_1, 52u, (r12 + 52), static_cast<uint8_t>(r4));
    r4 = (r10 + 22);
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r12 + 56), static_cast<uint8_t>(r3));
    r3 = (r10 + 23);
    MemoryInline::WriteResolved8(guest_range_1, 60u, (r12 + 60), static_cast<uint8_t>(r0));
    r0 = (r10 + 24);
    r10 = (r10 + 24);
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r12 + 64), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 68u, (r12 + 68), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 72u, (r12 + 72), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 76u, (r12 + 76), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 80u, (r12 + 80), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 84u, (r12 + 84), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 88u, (r12 + 88), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r12 + 92), static_cast<uint8_t>(r0));
    r12 = (r12 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8079AA40;
    }
}

loc_8079AB0C:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r11 + 284), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079B338u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    r3 = (r3 + 10);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8079AF08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 28), r0);
}

loc_8079AB44:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 13856), r31);
}

loc_8079AB4C:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 13856));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8079A8A4 func_8079A8A4 preserves=true fpr_mask=0x00000000
