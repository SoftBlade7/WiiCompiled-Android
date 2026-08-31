#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074080C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8074080C;

loc_8074080C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80740834:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740994;
    }
}

loc_80740838:
{
    r6 = MemoryInline::FlatRead32((r3 + 36));
}

loc_80740840:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80740858;
    }
}

loc_80740844:
{
}

loc_80740848:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8074090C;
    }
}

loc_8074084C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_80740850:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074093C;
    }
}

loc_80740854:
{
    goto loc_80740994;
}

loc_80740858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8074085C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807408F4;
    }
}

loc_80740860:
{
    r30 = 0x809C0000u;
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r28));
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 * r28);
    r0 = (r3 - r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r31 + r0);
    r28 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80740890:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807408B8;
    }
}

loc_80740894:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = (r29 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + 16));
    r4 = (r4 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r4 = (r4 - r0);
    goto loc_807408C8;
}

loc_807408B8:
{
    r3 = MemoryInline::FlatRead32((r30 + 11240));
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0;
}

loc_807408C8:
{
    r3 = (r4 + r3);
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r3 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32((r28 + 24), r0);
    MemoryInline::FlatWrite32((r3 + 24), r4);
}

loc_807408F4:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    goto loc_80740994;
}

loc_8074090C:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r4 = 0x808D0000u;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    r0 = MemoryInline::FlatRead16((r4 + -19846));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80740924:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740994;
    }
}

loc_80740928:
{
    r0 = (r6 + 1);
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 40), r4);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    goto loc_80740994;
}

loc_8074093C:
{
    r6 = 0;
    goto loc_80740964;
}

loc_80740944:
{
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 20));
    MemoryInline::FlatWrite32((r5 + 24), r0);
}

loc_80740954:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_8074095C;
    }
}

loc_80740958:
{
    MemoryInline::FlatWrite32((r5 + 24), r4);
}

loc_8074095C:
{
    r31 = (r31 + 4);
    r6 = (r6 + 1);
}

loc_80740964:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8074096C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_80740944;
    }
}

loc_80740970:
{
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r4 = 0x808D0000u;
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    r0 = MemoryInline::FlatRead16((r4 + -19844));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80740988:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80740994;
    }
}

loc_8074098C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 36), r0);
}

loc_80740994:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8074080C func_8074080C preserves=true fpr_mask=0x00000000
