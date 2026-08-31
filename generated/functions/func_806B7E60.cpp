#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B7E60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B7E60;

loc_806B7E60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_806B7E6C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + -3704);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_806B7EA4;
    }
}

loc_806B7E90:
{
}

loc_806B7E94:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806B7EC0;
    }
}

loc_806B7E98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_806B7E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B7F68;
    }
}

loc_806B7EA0:
{
    goto loc_806B800C;
}

loc_806B7EA4:
{
    r3 = r4;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806B7EB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806B800C;
    }
}

loc_806B7EB8:
{
    r31 = 8;
    goto loc_806B800C;
}

loc_806B7EC0:
{
    r3 = MemoryInline::FlatRead32((r3 + 272));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806B7ECC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B800C;
    }
}

loc_806B7ED0:
{
    r3 = r4;
    r4 = 1;
    ctx->lr = 0x806B7EDCu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590478u>(ctx);
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r7 = 0;
    MemoryInline::FlatWrite32((r30 + 272), r7);
    r4 = 0x802A0000u;
    r6 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 300), f0.d);
    r5 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat32((r29 + 52));
    r3 = (r4 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8708));
    r0 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r5 + 8712));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 252));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 292), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r30 + 52));
    MemoryInline::FlatWriteFloat32((r30 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 276), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 280), f4.d);
    MemoryInline::FlatWrite8((r30 + 296), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteFloat32((r30 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    MemoryInline::FlatWriteFloat32((r30 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 256), f0.d);
    MemoryInline::FlatWrite8((r30 + 308), static_cast<uint8_t>(r0));
    goto loc_806B800C;
}

loc_806B7F68:
{
    r3 = MemoryInline::FlatRead32((r3 + 272));
    r0 = (r3 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806B7F74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B800C;
    }
}

loc_806B7F78:
{
    r3 = r4;
    r4 = 1;
    ctx->lr = 0x806B7F84u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590478u>(ctx);
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r7 = 0;
    MemoryInline::FlatWrite32((r30 + 272), r7);
    r4 = 0x802A0000u;
    r6 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 300), f0.d);
    r5 = 0x808C0000u;
    f3.d = MemoryInline::FlatReadFloat32((r29 + 52));
    r3 = (r4 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8708));
    r0 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r5 + 8712));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 252));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 292), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r30 + 52));
    MemoryInline::FlatWriteFloat32((r30 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 276), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 280), f4.d);
    MemoryInline::FlatWrite8((r30 + 296), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteFloat32((r30 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    MemoryInline::FlatWriteFloat32((r30 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 256), f0.d);
    MemoryInline::FlatWrite8((r30 + 308), static_cast<uint8_t>(r0));
}

loc_806B800C:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806B7E60 func_806B7E60 preserves=true fpr_mask=0x00000000
