#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071ECC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8074C064_loc_0 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071ECC4;

loc_8071ECC4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808D0000u;
    r30 = (r30 + -27448);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = MemoryInline::FlatRead32((r3 + 356));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8071ECEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071EE04;
    }
}

loc_8071ECF0:
{
    r4 = 0x808A0000u;
    r3 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8376));
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    MemoryInline::FlatWrite8((r29 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    r3 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 132));
    // inline leaf 0x8074C048 (27 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 0x808A0000u;
    r5 = 0x80240000u;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 20);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11476));
    r5 = (r5 + 28832);
    addr_stfsx_8074C064_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8074C064_loc_0, f1.d);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 20);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r4 = MemoryInline::FlatRead32(r5);
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r6 + 8), r4);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r6 + 16), r0);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x8074C048
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 132));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 136));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8074C0B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071ED44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071ED4C;
    }
}

loc_8071ED48:
{
    goto loc_8071ED50;
}

loc_8071ED4C:
{
    f1.d = f0.d;
}

loc_8071ED50:
{
    MemoryInline::FlatWriteFloat32((r29 + 20), f1.d);
    r31 = 0x808A0000u;
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8376));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8074C048u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8376));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 136));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8074C0B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071ED90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071ED98;
    }
}

loc_8071ED94:
{
    goto loc_8071ED9C;
}

loc_8071ED98:
{
    f1.d = f0.d;
}

loc_8071ED9C:
{
    MemoryInline::FlatWriteFloat32((r29 + 20), f1.d);
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8376));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8074C048u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    r4 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8380));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 136));
    r4 = MemoryInline::FlatRead16((r30 + 140));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8074C0B4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8071EDE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8071EDE8;
    }
}

loc_8071EDE4:
{
    goto loc_8071EDEC;
}

loc_8071EDE8:
{
    f1.d = f0.d;
}

loc_8071EDEC:
{
    MemoryInline::FlatWriteFloat32((r29 + 20), f1.d);
    r0 = 1;
    r3 = 0x808A0000u;
    MemoryInline::FlatWrite8((r29 + 28), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8380));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
}

loc_8071EE04:
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

// RECOMP_GUEST_ABI gpr_read=0xE00000FB gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071ECC4 func_8071ECC4 preserves=true fpr_mask=0x00000000
