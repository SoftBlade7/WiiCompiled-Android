#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805883F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805883F4;

loc_805883F4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80588430u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r29 + 694));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 694), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8058844C;
    }
}

loc_80588444:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 694), static_cast<uint16_t>(r0));
}

loc_8058844C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 536870912);
}

loc_8058845C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805885A8;
    }
}

loc_80588460:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80588468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80588480;
    }
}

loc_8058846C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = r29;
    r4 = 6;
    r5 = 1;
    ctx->lr = 0x80588480u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8059041Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80588480:
{
    r4 = MemoryInline::FlatRead32(r29);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 16);
}

loc_80588494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805884D4;
    }
}

loc_80588498:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 184));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 136));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805884AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805884D4;
    }
}

loc_805884B0:
{
    r3 = MemoryInline::FlatRead16((r29 + 700));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 700), static_cast<uint16_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r30 + 256));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805884C8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_805884DC;
    }
}

loc_805884CC:
{
    r5 = 1;
    goto loc_805884DC;
}

loc_805884D4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 700), static_cast<uint16_t>(r0));
}

loc_805884DC:
{
    r4 = MemoryInline::FlatRead32((r29 + 680));
    r3 = MemoryInline::FlatRead32((r29 + 704));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r29 + 680), r4);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_805884F4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8058852C;
    }
}

loc_805884F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805884FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058852C;
    }
}

loc_80588500:
{
    r12 = MemoryInline::FlatRead32((r29 + 12));
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80588514u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80588518:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80588544;
    }
}

loc_8058851C:
{
    r3 = MemoryInline::FlatRead32((r29 + 680));
    r0 = MemoryInline::FlatRead16((r30 + 500));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80588528:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80588544;
    }
}

loc_8058852C:
{
    r12 = MemoryInline::FlatRead32((r29 + 12));
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x80588540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8058860C;
}

loc_80588544:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 672));
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 464));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 672), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r0 = MemoryInline::FlatRead32((r3 + 164));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r4 = MemoryInline::FlatRead32((r3 + 168));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    r0 = MemoryInline::FlatRead32((r3 + 172));
    r3 = r29;
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 168), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 172), f0.d);
    goto loc_8058860C;
}

loc_805885A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 4);
}

loc_805885B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805885C8;
    }
}

loc_805885B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 672));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 468));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 672), f0.d);
    goto loc_8058860C;
}

loc_805885C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 672));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805885D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8058860C;
    }
}

loc_805885D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 696));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 476));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 696), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 480));
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805885F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805885FC;
    }
}

loc_805885F8:
{
    MemoryInline::FlatWriteFloat32((r29 + 696), f0.d);
}

loc_805885FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 672));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 696));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 672), f0.d);
}

loc_8058860C:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 672));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 676));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058861C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80588628;
    }
}

loc_80588620:
{
    MemoryInline::FlatWriteFloat32((r29 + 672), f1.d);
    goto loc_80588634;
}

loc_80588628:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8058862C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80588634;
    }
}

loc_80588630:
{
    MemoryInline::FlatWriteFloat32((r29 + 672), f2.d);
}

loc_80588634:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 672));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80588640:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80588768;
    }
}

loc_80588644:
{
    r0 = MemoryInline::FlatRead32((r29 + 116));
    r4 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r4 + 16688);
    r5 = MemoryInline::FlatRead32((r29 + 120));
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    r0 = MemoryInline::FlatRead32((r29 + 124));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 504));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80588698:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805886C4;
    }
}

loc_8058869C:
{
    r3 = MemoryInline::FlatRead32((r29 + 680));
    r0 = MemoryInline::FlatRead16((r30 + 500));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805886A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805886C4;
    }
}

loc_805886AC:
{
    r12 = MemoryInline::FlatRead32((r29 + 12));
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x805886C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80588750;
}

loc_805886C4:
{
    f3.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 672));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f2.d = MemoryInline::FlatReadFloat32((r3 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 228), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 236));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    r0 = MemoryInline::FlatRead8((r29 + 684));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058872C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80588750;
    }
}

loc_80588730:
{
    r3 = MemoryInline::FlatRead16((r29 + 692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 692), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 484));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80588744:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80588750;
    }
}

loc_80588748:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 684), static_cast<uint8_t>(r0));
}

loc_80588750:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8058877C;
}

loc_80588768:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8058877C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805883F4 func_805883F4 preserves=true fpr_mask=0x00000000
