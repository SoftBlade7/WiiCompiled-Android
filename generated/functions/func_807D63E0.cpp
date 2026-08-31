#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D63E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D63E0;

loc_807D63E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r3 + 574));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D6408:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D65A0;
    }
}

loc_807D640C:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead8((r4 + 330));
}

loc_807D6418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D64D8;
    }
}

loc_807D641C:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 576));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 29696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D642C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D645C;
    }
}

loc_807D6430:
{
    r6 = MemoryInline::FlatRead32((r3 + 148));
    r4 = (r3 + 180);
    r0 = MemoryInline::FlatRead32((r3 + 156));
    r5 = (r3 + 372);
    r6 = (r6 * 48);
    r8 = 0;
    r0 = (r0 * 48);
    r6 = (r31 + r6);
    r7 = (r31 + r0);
    ctx->lr = 0x807D6458u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D5E90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r30 + 592), f1.d);
}

loc_807D645C:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 580));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D646C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807D64D8;
    }
}

loc_807D6470:
{
    r0 = MemoryInline::FlatRead32((r30 + 152));
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 * 48);
    r29 = (r31 + r0);
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D6490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D64B0;
    }
}

loc_807D6494:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 1000));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29908));
    r3 = r29;
    f1.d = (-(f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x807D64B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807DED14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_807D64B0:
{
    r0 = MemoryInline::FlatRead32((r30 + 160));
    r3 = r30;
    r6 = r29;
    r4 = (r30 + 228);
    r0 = (r0 * 48);
    r5 = (r30 + 420);
    r8 = 0;
    r7 = (r31 + r0);
    ctx->lr = 0x807D64D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D5E90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r30 + 596), f1.d);
}

loc_807D64D8:
{
    r7 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r7 + 331));
}

loc_807D64E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D658C;
    }
}

loc_807D64E8:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 584));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D64F8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807D6508;
    }
}

loc_807D64FC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1008));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D6504:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D6538;
    }
}

loc_807D6508:
{
    r5 = MemoryInline::FlatRead32((r30 + 164));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r30 + 172));
    r4 = (r30 + 276);
    r6 = (r5 * 48);
    r5 = (r30 + 468);
    r8 = (r7 + 652);
    r0 = (r0 * 48);
    r6 = (r31 + r6);
    r7 = (r31 + r0);
    ctx->lr = 0x807D6534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D5E90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r30 + 600), f1.d);
}

loc_807D6538:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 588));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807D6548:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807D6558;
    }
}

loc_807D654C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1009));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D6554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D658C;
    }
}

loc_807D6558:
{
    r5 = MemoryInline::FlatRead32((r30 + 168));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r30 + 176));
    r4 = (r30 + 324);
    r7 = (r5 * 48);
    r6 = MemoryInline::FlatRead32((r30 + 16));
    r5 = (r30 + 516);
    r8 = (r6 + 664);
    r0 = (r0 * 48);
    r6 = (r31 + r7);
    r7 = (r31 + r0);
    ctx->lr = 0x807D6588u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D5E90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r30 + 604), f1.d);
}

loc_807D658C:
{
    r0 = MemoryInline::FlatRead8((r30 + 572));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D6594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D65A0;
    }
}

loc_807D6598:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 572), static_cast<uint8_t>(r0));
}

loc_807D65A0:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D63E0 func_807D63E0 preserves=true fpr_mask=0x00000000
