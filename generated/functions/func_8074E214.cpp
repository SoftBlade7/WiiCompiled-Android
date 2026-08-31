#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074E214(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8074E214;

loc_8074E214:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRam32((r1 + 124), r31);
    MemoryInline::FlatWriteRam32((r1 + 120), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 212));
    r0 = MemoryInline::FlatRead32((r4 + 11440));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 212), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_8074E244:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8074E268;
    }
}

loc_8074E248:
{
    r5 = 0x808A0000u;
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12628));
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
    goto loc_8074E29C;
}

loc_8074E268:
{
    r3 = (r0 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 12664));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12644));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
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
    InvokeDirectCpu<0x8022F860u>(ctx);
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
    MemoryInline::FlatWriteFloat32((r30 + 104), f1.d);
}

loc_8074E29C:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 104));
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 220));
    r31 = 0x808A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r30 + 216));
    r3 = (r1 + 8);
    f2.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 228));
    f4.d = PpcFmulsInline(f4.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12644));
    r4 = (r4 + 16688);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 208), f1.d);
    f1.d = (-(f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 204), f2.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x8074E2E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 204));
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12644));
    r3 = (r1 + 56);
    r4 = (r4 + 16664);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->lr = 0x8074E304u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    r5 = (r30 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0xC000C01E fpr_write=0xC000FFFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074E214 func_8074E214 preserves=true fpr_mask=0x00000000
