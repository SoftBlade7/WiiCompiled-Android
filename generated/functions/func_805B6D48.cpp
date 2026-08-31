#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B6D48(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805B6D48;

loc_805B6D48:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    f5.d = MemoryInline::FlatReadFloat32(r6);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f3.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r5;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 108));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 112));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 104), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 108), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 112), f0.d);
    r3 = MemoryInline::FlatRead32(r5);
    r0 = (r3 & 1);
}

loc_805B6D9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B6DB4;
    }
}

loc_805B6DA0:
{
    r0 = (r3 & 66);
}

loc_805B6DA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B6DB4;
    }
}

loc_805B6DA8:
{
    MemoryInline::FlatWriteFloat32((r5 + 76), f5.d);
    MemoryInline::FlatWriteFloat32((r5 + 80), f3.d);
    MemoryInline::FlatWriteFloat32((r5 + 84), f1.d);
}

loc_805B6DB4:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 60), r8);
    r8 = 0x80890000u;
    r6 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r3 = (r4 + 240);
    f1.d = MemoryInline::FlatReadFloat64((r8 + 10136));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 10124));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32(r7);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 104));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 104), f0.d);
    r5 = (r1 + 8);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 100));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 164));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 168));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 172));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    r4 = (r1 + 44);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    ctx->lr = 0x805B6E44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8023A404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f7.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r5 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r3 = (r30 + 240);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f6.d = PpcFmulsInline(f7.d, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f7.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    ctx->lr = 0x805B6E9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 52), f3.d);
    r0 = MemoryInline::FlatRead32(r31);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r31 + 56), f2.d);
    r0 = (r0 & 1);
}

loc_805B6EE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B6F20;
    }
}

loc_805B6F04:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 336));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10120));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805B6F14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B6F20;
    }
}

loc_805B6F18:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_805B6F20:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B6F28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B6F34;
    }
}

loc_805B6F2C:
{
    r3 = (r31 + 16);
    ctx->lr = 0x805B6F34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_805B6F34:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00001FF gpr_write=0xC000017B gpr_return=0x00000018 fpr_read=0xC000003F fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B6D48 func_805B6D48 preserves=true fpr_mask=0x00000000
