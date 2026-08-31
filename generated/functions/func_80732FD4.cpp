#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80732FD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_80732FD4;

loc_80732FD4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 9896);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 320));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    // inline leaf 0x8051E85C (16 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -832));
    r5 = 0;
    r4 = 7;
    r0 = (r0 & -129);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8051E85C
    r3 = MemoryInline::FlatRead32((r29 + 320));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 652), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80733030:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073303C;
    }
}

loc_80733034:
{
    MemoryInline::FlatWriteFloat32((r3 + 652), f0.d);
    goto loc_80733050;
}

loc_8073303C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80733048:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80733050;
    }
}

loc_8073304C:
{
    MemoryInline::FlatWriteFloat32((r3 + 652), f1.d);
}

loc_80733050:
{
    r3 = MemoryInline::FlatRead32((r29 + 344));
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80733064u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead32((r29 + 320));
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + -844));
    r30 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r29 + 336));
    f1.d = PPC_Fctiwz(f2.d);
    r0 = MemoryInline::FlatRead16((r4 + 12));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    r3 = MemoryInline::FlatRead32((r29 + 336));
    r4 = fctiwzword0;
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword1;
    r4 = (r4 + r0);
    r4 = (r4 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8051E9E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r31 = MemoryInline::FlatRead32((r29 + 336));
    r3 = r30;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctx->lr = 0x807330D8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80535718u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80732FD4 func_80732FD4 preserves=true fpr_mask=0x00000000
