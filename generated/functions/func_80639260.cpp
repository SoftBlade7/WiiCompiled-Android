#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80639260(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80639260;

loc_80639260:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80639284:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806393AC;
    }
}

loc_80639288:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 336));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8063929C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806392A8;
    }
}

loc_806392A0:
{
    r29 = 0;
    goto loc_806392FC;
}

loc_806392A8:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7048);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806392F8;
    }
}

loc_806392B4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806392C8u;
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806392E0;
}

loc_806392CC:
{
}

loc_806392D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806392DC;
    }
}

loc_806392D4:
{
    r0 = 1;
    goto loc_806392EC;
}

loc_806392DC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806392E0:
{
}

loc_806392E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806392CC;
    }
}

loc_806392E8:
{
    r0 = 0;
}

loc_806392EC:
{
}

loc_806392F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806392F8;
    }
}

loc_806392F4:
{
    goto loc_806392FC;
}

loc_806392F8:
{
    r29 = 0;
}

loc_806392FC:
{
    r0 = MemoryInline::FlatRead32((r29 + 2640));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80639304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80639314;
    }
}

loc_80639308:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8063930C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063939C;
    }
}

loc_80639310:
{
    goto loc_806393AC;
}

loc_80639314:
{
    r11 = 0x809C0000u;
    r5 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r11 + 7736));
    r6 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -30688));
    r10 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 152));
    r8 = 0x809C0000u;
    r7 = 5;
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 964), r6);
    r3 = r31;
    r4 = 31;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r11 + 7736));
    r9 = MemoryInline::FlatRead32((r10 + -10456));
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r9 = MemoryInline::FlatRead32((r9 + 5976));
    MemoryInline::FlatWrite32((r6 + 968), r9);
    r6 = MemoryInline::FlatRead32((r11 + 7736));
    r8 = MemoryInline::FlatRead32((r8 + -10424));
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r8 = MemoryInline::FlatRead16((r8 + 54));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::FlatWrite32((r6 + 972), r8);
    r6 = MemoryInline::FlatRead32((r10 + -10456));
    MemoryInline::FlatWrite32((r6 + 3352), r7);
    MemoryInline::FlatWrite32((r31 + 84), r0);
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80639390u;
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806393AC;
}

loc_8063939C:
{
    r3 = 111;
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 84), r3);
    MemoryInline::FlatWrite32((r31 + 88), r0);
}

loc_806393AC:
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80639260 func_80639260 preserves=true fpr_mask=0x00000000
