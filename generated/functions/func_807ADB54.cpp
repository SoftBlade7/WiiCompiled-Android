#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807ADB54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807ADB54;

loc_807ADB54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 23288);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    // inline leaf 0x807A2F88 (13 guest instruction(s))
}

loc_inl0_0x807A2F88:
{
    r4 = MemoryInline::FlatRead32((r3 + 152));
    r0 = (r3 + 128);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_inl0_0x807A2F94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x807A2F98:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 128));
    r0 = (r3 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    MemoryInline::FlatWriteFloat32((r3 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
    MemoryInline::FlatWrite32((r3 + 152), r0);
    goto loc_inl0_cont_807A2F88;
}

loc_inl0_return:
{
}

loc_inl0_cont_807A2F88:
{
    // end of inlined leaf 0x807A2F88
    f1.d = MemoryInline::FlatReadFloat32((r31 + 308));
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 344));
    r3 = (r3 + 12104);
    MemoryInline::FlatWriteFloat32((r30 + 732), f1.d);
    r4 = 0;
    r0 = MemoryInline::FlatRead32((r30 + 120));
    MemoryInline::FlatWriteFloat32((r30 + 736), f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 780));
    r0 = (r0 | 1024);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 652));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 784));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 788));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 348));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 352));
    MemoryInline::FlatWriteFloat32((r30 + 320), f5.d);
    r3 = MemoryInline::FlatRead32((r30 + 156));
    MemoryInline::FlatWrite32((r30 + 120), r0);
    MemoryInline::FlatWriteFloat32((r30 + 804), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 808), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 812), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 752), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 760), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 356));
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807ADBF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFC7 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807ADB54 func_807ADB54 preserves=true fpr_mask=0x00000000
