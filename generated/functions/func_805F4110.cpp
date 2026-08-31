#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F4110(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
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
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F4110;

loc_805F4110:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 516));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805F4140:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F414C;
    }
}

loc_805F4144:
{
    r30 = 0;
    goto loc_805F41A0;
}

loc_805F414C:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7336);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F419C;
    }
}

loc_805F4158:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805F416Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    ctx->fpr[8] = f8;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805F4184;
}

loc_805F4170:
{
}

loc_805F4174:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805F4180;
    }
}

loc_805F4178:
{
    r0 = 1;
    goto loc_805F4190;
}

loc_805F4180:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805F4184:
{
}

loc_805F4188:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805F4170;
    }
}

loc_805F418C:
{
    r0 = 0;
}

loc_805F4190:
{
}

loc_805F4194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805F419C;
    }
}

loc_805F4198:
{
    goto loc_805F41A0;
}

loc_805F419C:
{
    r30 = 0;
}

loc_805F41A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805F41A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F4288;
    }
}

loc_805F41A8:
{
    r0 = MemoryInline::FlatRead8((r31 + 372));
    r3 = (r30 + 148);
    r5 = MemoryInline::FlatRead32((r31 + 376));
    r6 = 1;
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 84));
    // inline leaf 0x805F5FA4 (14 guest instruction(s))
    r8 = 0x80380000u;
    r7 = (r3 + r4);
    r8 = MemoryInline::FlatRead32((r8 + 24576));
    r4 = (r5 * 36);
    r0 = MemoryInline::FlatRead8((r7 + 6480));
    r7 = MemoryInline::FlatRead32((r8 + 88));
    r5 = (r0 * 324);
    r0 = (r7 * 3240);
    r0 = (r3 + r0);
    r0 = (r5 + r0);
    r3 = (r6 * 12);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    // end of inlined leaf 0x805F5FA4
    r0 = MemoryInline::FlatRead8((r31 + 372));
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r31 + 376));
    r3 = (r30 + 148);
    r0 = (r0 * 12);
    r6 = 2;
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 84));
    // inline leaf 0x805F5FA4 (14 guest instruction(s))
    r8 = 0x80380000u;
    r7 = (r3 + r4);
    r8 = MemoryInline::FlatRead32((r8 + 24576));
    r4 = (r5 * 36);
    r0 = MemoryInline::FlatRead8((r7 + 6480));
    r7 = MemoryInline::FlatRead32((r8 + 88));
    r5 = (r0 * 324);
    r0 = (r7 * 3240);
    r0 = (r3 + r0);
    r0 = (r5 + r0);
    r3 = (r6 * 12);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    // end of inlined leaf 0x805F5FA4
    r4 = 0x80890000u;
    r30 = r3;
    r4 = (r4 + 24484);
    r3 = (r31 + 168);
    r4 = (r4 + 159);
    ctx->lr = 0x805F4204u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E8368u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = 0x80890000u;
    f8.d = MemoryInline::FlatReadFloat32((r31 + 384));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24144));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f5.d = PpcFmulsInline(f0.d, f8.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f6.d = PpcFmulsInline(f2.d, f7.d);
    f4.d = PpcFmulsInline(f1.d, f7.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f3.d = PpcFmulsInline(f0.d, f8.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 23976));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 44), f5.d);
    f2.d = PpcFmulsInline(f2.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
}

loc_805F4288:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805F4110 func_805F4110 preserves=true fpr_mask=0x00000000
