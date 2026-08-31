#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80836A50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_80836A50;

loc_80836A50:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r7 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r3;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + -13536));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80836AA4:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80836AE4;
    }
}

loc_80836AB0:
{
    r3 = (r1 + 32);
    r4 = (r28 + 36);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r28 + 52), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r28 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 60), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 48), f0.d);
}

loc_80836AE4:
{
    r4 = r29;
    r3 = (r1 + 20);
    r5 = (r28 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = r31;
    MemoryInline::FlatWriteFloat32((r28 + 64), f0.d);
    r3 = (r1 + 8);
    r4 = (r28 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r28 + 68), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 84), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007A gpr_write=0xF00000BB gpr_return=0x00000018 fpr_read=0x0000104E fpr_write=0x00001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80836A50 func_80836A50 preserves=true fpr_mask=0x00000000
