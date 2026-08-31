#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80098B70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addic_src_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80098B70;

loc_80098B70:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    r0 = MemoryInline::FlatRead8((r13 + -27168));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80098BE4;
    }
}

loc_80098B94:
{
    r3 = 0x802D0000u;
    r0 = 0;
    r30 = (r3 + 22704);
    MemoryInline::FlatWriteRam8((r3 + 22704), static_cast<uint8_t>(r0));
    r29 = (r30 + 56);
    r31 = (r30 + 728);
}

loc_80098BAC:
{
    r3 = r29;
    ctx->lr = 0x80098BB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80098020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r29 = (r29 + 168);
}

loc_80098BBC:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_80098BAC;
    }
}

loc_80098BC0:
{
    r4 = 1;
    r5 = 0;
    r3 = 2;
    r0 = 3;
    MemoryInline::FlatWriteRam32((r30 + 108), r5);
    MemoryInline::FlatWriteRam32((r30 + 276), r4);
    MemoryInline::FlatWriteRam32((r30 + 444), r3);
    MemoryInline::FlatWriteRam32((r30 + 612), r0);
    MemoryInline::FlatWrite8((r13 + -27168), static_cast<uint8_t>(r4));
}

loc_80098BE4:
{
    r30 = 0x802D0000u;
    r30 = (r30 + 22704);
    // inline leaf 0x80126CE8 (11 guest instruction(s))
}

loc_inl0_0x80126CE8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26360));
    r3_addic_src_0 = r3;
    r3 = (r3_addic_src_0 + -36);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addic_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(-36)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_inl0_0x80126CF0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x80126CFC;
    }
}

loc_inl0_0x80126CF4:
{
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r3 = (r3 + r0);
}

loc_inl0_0x80126CFC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26364));
    r3 = (r3 - r0);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80126D08:
{
    r0 = MemoryInline::FlatRead32((r13 + -26356));
    r3 = (r3 + r0);
    goto loc_inl0_cont_80126CE8;
}

loc_inl0_return:
{
}

loc_inl0_cont_80126CE8:
{
    // end of inlined leaf 0x80126CE8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(40));
}

loc_80098BF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80098C4C;
    }
}

loc_80098BF8:
{
    r29 = (r30 + 56);
    r31 = 0;
}

loc_80098C00:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80098C08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80098C28;
    }
}

loc_80098C0C:
{
    r3 = r31;
    r4 = (r1 + 8);
    r5 = 40;
    ctx->lr = 0x80098C1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80126D14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = (r1 + 8);
    ctx->lr = 0x80098C28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80098310u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80098C28:
{
    r3 = r29;
    ctx->lr = 0x80098C30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80098230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 1);
    r29 = (r29 + 168);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_80098C3C:
{
    r30 = (r30 + 168);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80098C00;
    }
}

loc_80098C44:
{
    r3 = 40;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80126DD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80098C4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80098B70 func_80098B70 preserves=true fpr_mask=0x00000000
