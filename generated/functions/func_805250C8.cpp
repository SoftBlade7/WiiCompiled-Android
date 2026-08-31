#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805250C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805250C8;

loc_805250C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805250D4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805251E4;
    }
}

loc_805250EC:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = MemoryInline::FlatRead16((r4 + 8));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -8);
    ctx->lr = 0x805250FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -8);
    ctx->lr = 0x80525110u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r9 = 0;
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r6 = 0;
    r4 = 0;
    r3 = 1;
    r0 = MemoryInline::FlatRead16((r5 + 10));
    r8 = (r30 + r0);
    goto loc_805251D0;
}

loc_80525134:
{
    r0 = (r9 & 1);
}

loc_80525138:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052514C;
    }
}

loc_8052513C:
{
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -8);
    r10 = (r5 + r0);
    goto loc_80525158;
}

loc_8052514C:
{
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -8);
    r10 = (r5 + r0);
}

loc_80525158:
{
    r5 = (r7 + r6);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 6));
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
}

loc_80525170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80525180;
    }
}

loc_80525174:
{
}

loc_80525178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805251B8;
    }
}

loc_8052517C:
{
    goto loc_805251C8;
}

loc_80525180:
{
    r7 = (r5 + 7);
    MemoryInline::FlatWrite32((r10 + 4), r7);
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r4));
    goto loc_805251A8;
}

loc_80525190:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80525198:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(49))) {
        goto loc_805251A4;
    }
}

loc_8052519C:
{
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r3));
    goto loc_805251C8;
}

loc_805251A4:
{
    r7 = (r7 + 1);
}

loc_805251A8:
{
    r5 = MemoryInline::FlatRead8(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80525190;
    }
}

loc_805251B4:
{
    goto loc_805251C8;
}

loc_805251B8:
{
    r0 = MemoryInline::FlatRead16(r5);
    MemoryInline::FlatWrite16((r10 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 2));
    MemoryInline::FlatWrite16((r10 + 6), static_cast<uint16_t>(r0));
}

loc_805251C8:
{
    r6 = (r6 + 4);
    r9 = (r9 + 1);
}

loc_805251D0:
{
    r7 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::FlatRead16((r7 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r0));
}

loc_805251DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80525134;
    }
}

loc_805251E0:
{
    goto loc_805251EC;
}

loc_805251E4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_805251EC:
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805250C8 func_805250C8 preserves=true fpr_mask=0x00000000
