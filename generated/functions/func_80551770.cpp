#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80551770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80551770;

loc_80551770:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + -5376);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r3 = (r31 + 0);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055179C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551920;
    }
}

loc_805517A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 164));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_805517A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551920;
    }
}

loc_805517AC:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016EAB0u>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 496));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805517B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805517F0;
    }
}

loc_805517BC:
{
    r3 = (r31 + 608);
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x805517CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7424u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805517D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805517DC;
    }
}

loc_805517D4:
{
    r3 = 0;
    goto loc_805517E0;
}

loc_805517DC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_805517E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805517E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805517F0;
    }
}

loc_805517E8:
{
    ctx->lr = 0x805517ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80552D24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805517BC;
}

loc_805517F0:
{
    r29 = (r31 + 0);
    r0 = MemoryInline::FlatRead8((r29 + 167));
}

loc_805517FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80551878;
    }
}

loc_80551800:
{
    r0 = MemoryInline::FlatRead8((r29 + 166));
    r3 = MemoryInline::FlatRead32((r29 + 244));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055180C:
{
    r0 = MemoryInline::FlatRead32((r29 + 192));
    r3 = (r3 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551844;
    }
}

loc_80551818:
{
    r0 = MemoryInline::FlatRead32((r29 + 80));
}

loc_80551820:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80551844;
    }
}

loc_80551824:
{
    r3 = MemoryInline::FlatRead32((r29 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8055182C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055183C;
    }
}

loc_80551830:
{
    ctx->lr = 0x80551834u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80550ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam32((r29 + 252), r0);
}

loc_8055183C:
{
    r30 = 0;
    goto loc_80551878;
}

loc_80551844:
{
    r3 = (r31 + 0);
    r3 = MemoryInline::FlatRead32((r3 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80551850:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551858;
    }
}

loc_80551854:
{
    ctx->lr = 0x80551858u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80550ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80551858:
{
    r3 = 1;
    ctx->lr = 0x80551860u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80550AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = (r31 + 0);
    r30 = 1;
    r4 = MemoryInline::FlatRead32((r5 + 244));
    MemoryInline::FlatWriteRam32((r5 + 252), r3);
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 244), r0);
}

loc_80551878:
{
    r5 = (r31 + 0);
    r3 = MemoryInline::FlatRead32((r5 + 248));
}

loc_80551884:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80551898;
    }
}

loc_80551888:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 192));
    r5 = (r4 + r0);
    goto loc_805518A0;
}

loc_80551898:
{
    r4 = MemoryInline::FlatRead32((r5 + 192));
    r5 = (r4 + -1);
}

loc_805518A0:
{
    r4 = (r31 + 0);
    r0 = MemoryInline::FlatRead8((r4 + 166));
    r0 = (r0 & 1);
}

loc_805518AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805518C8;
    }
}

loc_805518B0:
{
    r4 = MemoryInline::FlatRead32((r4 + 80));
    r0 = (r4 + -1);
}

loc_805518BC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_805518C8;
    }
}

loc_805518C0:
{
    r0 = 0;
    goto loc_80551900;
}

loc_805518C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805518CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805518D4;
    }
}

loc_805518D0:
{
    ctx->lr = 0x805518D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80552D24u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805518D4:
{
    r3 = 1;
    ctx->lr = 0x805518DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80552D38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r31 + 0);
    r0 = MemoryInline::FlatRead8((r4 + 167));
    MemoryInline::FlatWriteRam32((r4 + 248), r3);
}

loc_805518EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805518FC;
    }
}

loc_805518F0:
{
    r3 = MemoryInline::FlatRead32((r4 + 240));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 240), r0);
}

loc_805518FC:
{
    r0 = 1;
}

loc_80551900:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80551904:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551910;
    }
}

loc_80551908:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055190C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551918;
    }
}

loc_80551910:
{
    r3 = 1;
    goto loc_80551924;
}

loc_80551918:
{
    r3 = 0;
    goto loc_80551924;
}

loc_80551920:
{
    r3 = 0;
}

loc_80551924:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80551770 func_80551770 preserves=true fpr_mask=0x00000000
