#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80582F9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80582F9C;

loc_80582F9C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_80582FA8:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80582FCC;
    }
}

loc_80582FC4:
{
    r31 = r5;
    goto loc_80582FD0;
}

loc_80582FCC:
{
    r31 = MemoryInline::FlatRead16((r3 + 252));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
}

loc_80582FD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80582FD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80583258;
    }
}

loc_80582FD8:
{
    r3 = r29;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r0 = MemoryInline::FlatRead32((r3 + 108));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_80582FE8:
{
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80583028;
    }
}

loc_80582FF0:
{
    r3 = (r31 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 6752));
    r3 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23760));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r31 = fctiwzword0;
}

loc_80583028:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = 135004160;
    r0 = (r3 + 256);
    r5 = 1;
    r7 = MemoryInline::FlatRead32((r4 + 4));
    r4 = 1;
    r6 = 1;
    r3 = MemoryInline::FlatRead32((r7 + 12));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80583060;
    }
}

loc_80583050:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 16);
}

loc_80583058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80583060;
    }
}

loc_8058305C:
{
    r6 = 0;
}

loc_80583060:
{
}

loc_80583064:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80583078;
    }
}

loc_80583068:
{
    r0 = MemoryInline::FlatRead32((r7 + 20));
    r0 = (r0 & 128);
}

loc_80583070:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80583078;
    }
}

loc_80583074:
{
    r4 = 0;
}

loc_80583078:
{
}

loc_8058307C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80583090;
    }
}

loc_80583080:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r0 & 1);
}

loc_80583088:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80583090;
    }
}

loc_8058308C:
{
    r5 = 0;
}

loc_80583090:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80583094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80583258;
    }
}

loc_80583098:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805830A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805830AC;
    }
}

loc_805830A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805830A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583258;
    }
}

loc_805830AC:
{
    r3 = r29;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->lr = 0x805830CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806A3948u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    ctx->lr = 0x805830D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80708BACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r29 + 280));
    r4 = 0;
    r0 = (r0 & 1);
}

loc_805830E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805830F8;
    }
}

loc_805830E8:
{
    r0 = MemoryInline::FlatRead16((r29 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_805830F4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_80583118;
    }
}

loc_805830F8:
{
    r0 = MemoryInline::FlatRead16((r29 + 280));
    r3 = 0x808B0000u;
    MemoryInline::FlatWrite16((r29 + 268), static_cast<uint16_t>(r31));
    r4 = 1;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r29 + 280), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23696));
    MemoryInline::FlatWriteFloat32((r29 + 292), f0.d);
}

loc_80583118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8058311C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583190;
    }
}

loc_80583120:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 292));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590E40u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r29;
    r4 = 6;
    ctx->lr = 0x8058314Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805907B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r4 = (r31 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x80583170u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806A3AC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    ctx->lr = 0x8058317Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D3D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r29;
    r4 = 4;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x80583190u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80591044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80583190:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6660));
    r3 = r29;
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r4 = 5;
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    MemoryInline::FlatWrite16((r29 + 258), static_cast<uint16_t>(r31));
    ctx->lr = 0x805831C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059041Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 6;
    ctx->lr = 0x805831CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805907B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_805831E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80583204;
    }
}

loc_805831E8:
{
    r0 = MemoryInline::FlatRead16((r5 + 2974));
}

loc_805831F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80583204;
    }
}

loc_805831F4:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_80583204:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 52));
}

loc_80583214:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80583224;
    }
}

loc_80583218:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_80583224:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80583234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80583258;
    }
}

loc_80583238:
{
    r0 = MemoryInline::FlatRead16((r29 + 252));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = r29;
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x80591440 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    // end of inlined leaf 0x80591440
    MemoryInline::FlatWrite8((r3 + 88), static_cast<uint8_t>(r30));
    r3 = r29;
    r4 = 29;
    // inline leaf 0x805917C0 (13 guest instruction(s))
}

loc_inl6_0x805917C0:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x805917D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x805917D4:
{
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_inl6_cont_805917C0;
}

loc_inl6_return:
{
}

loc_inl6_cont_805917C0:
{
    // end of inlined leaf 0x805917C0
}

loc_80583258:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 252), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80582F9C func_80582F9C preserves=true fpr_mask=0x00000000
