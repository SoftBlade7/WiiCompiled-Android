#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057F1D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057F1D0;

loc_8057F1D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 135004160;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 + 256);
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32(r3);
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r7 + 12));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057F220;
    }
}

loc_8057F210:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 16);
}

loc_8057F218:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057F220;
    }
}

loc_8057F21C:
{
    r6 = 0;
}

loc_8057F220:
{
}

loc_8057F224:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8057F238;
    }
}

loc_8057F228:
{
    r0 = MemoryInline::FlatRead32((r7 + 20));
    r0 = (r0 & 128);
}

loc_8057F230:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057F238;
    }
}

loc_8057F234:
{
    r5 = 0;
}

loc_8057F238:
{
}

loc_8057F23C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8057F250;
    }
}

loc_8057F240:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r0 & 1);
}

loc_8057F248:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057F250;
    }
}

loc_8057F24C:
{
    r4 = 0;
}

loc_8057F250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8057F254:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057F3C0;
    }
}

loc_8057F258:
{
    r4 = 0x808B0000u;
    r3 = r30;
    r31 = MemoryInline::FlatRead16((r4 + 23338));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->lr = 0x8057F280u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806A3948u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    ctx->lr = 0x8057F28Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80708BACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r30 + 280));
    r4 = 0;
    r0 = (r0 & 4);
}

loc_8057F298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057F2A8;
    }
}

loc_8057F29C:
{
    r0 = MemoryInline::FlatRead16((r30 + 272));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8057F2A4:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_8057F2CC;
    }
}

loc_8057F2A8:
{
    r0 = MemoryInline::FlatRead16((r30 + 280));
    r3 = 0x808B0000u;
    MemoryInline::FlatWrite16((r30 + 272), static_cast<uint16_t>(r31));
    r3 = (r3 + 23696);
    r0 = (r0 | 4);
    r4 = 1;
    MemoryInline::FlatWrite16((r30 + 280), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 292), f0.d);
}

loc_8057F2CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8057F2D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057F344;
    }
}

loc_8057F2D4:
{
    r4 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 292));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80590E40u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x8057F300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x805907B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r4 = (r31 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x8057F324u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806A3AC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    ctx->lr = 0x8057F330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D3D58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r30;
    r4 = 4;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8057F344u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80591044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8057F344:
{
    r3 = 0x808B0000u;
    r0 = MemoryInline::FlatRead16((r30 + 328));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r3 + 23338));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8057F354:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8057F35C;
    }
}

loc_8057F358:
{
    MemoryInline::FlatWrite16((r30 + 328), static_cast<uint16_t>(r3));
}

loc_8057F35C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057F380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057F3C0;
    }
}

loc_8057F384:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = 0;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r4 = (r4 & -268435457);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    MemoryInline::FlatWrite16((r30 + 398), static_cast<uint16_t>(r0));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    MemoryInline::FlatWrite8((r3 + 269), static_cast<uint8_t>(r4));
}

loc_8057F3C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057F1D0 func_8057F1D0 preserves=true fpr_mask=0x00000000
