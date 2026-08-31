#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DC9D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_806DC9D8;

loc_806DC9D8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 888);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r3;
    ctx->lr = 0x806DCA04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806DCDDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
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
    r0 = MemoryInline::FlatRead32((r28 + 328));
    r30 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r30);
    r31 = 0x808C0000u;
    r0 = (r0 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r29 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 23960));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 76));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r28 + 328));
    r3 = 0x808C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23944));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat64((r29 + 40));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWriteFloat32((r28 + 300), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 23960));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806DCA80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806DCAE0;
    }
}

loc_806DCA84:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_806DCA8C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806DCAE0;
    }
}

loc_806DCA94:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 324), static_cast<uint8_t>(r0));
    r3 = r28;
    MemoryInline::FlatWrite32((r28 + 328), r0);
    r12 = MemoryInline::FlatRead32(r28);
    r12 = MemoryInline::FlatRead32((r12 + 148));
    ctr = r12;
    ctx->lr = 0x806DCAB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
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
    r0 = MemoryInline::FlatRead16((r28 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r28 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 68), f0.d);
    goto loc_806DCB38;
}

loc_806DCAE0:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 304));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 304), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806DCAF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806DCB00;
    }
}

loc_806DCAFC:
{
    MemoryInline::FlatWriteFloat32((r28 + 304), f0.d);
}

loc_806DCB00:
{
    r0 = MemoryInline::FlatRead16((r28 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 304));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 300));
    r4 = (r0 | 8);
    r3 = MemoryInline::FlatRead32((r28 + 328));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWrite16((r28 + 44), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteFloat32((r28 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 68), f1.d);
    MemoryInline::FlatWrite32((r28 + 328), r0);
}

loc_806DCB38:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806DC9D8 func_806DC9D8 preserves=true fpr_mask=0x00000000
