#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A5D88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A5D88;

loc_807A5D88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r5 + 14520));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807A5DB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A5E84;
    }
}

loc_807A5DBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 32768);
}

loc_807A5DC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A5DD0;
    }
}

loc_807A5DC8:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
    goto loc_807A5DD4;
}

loc_807A5DD0:
{
    r0 = 12;
}

loc_807A5DD4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807A5DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A5E84;
    }
}

loc_807A5DDC:
{
    r3 = r28;
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A33E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807A5DEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A5E84;
    }
}

loc_807A5DF0:
{
    r3 = 0x809C0000u;
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0 = (r29 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r30 = (r3 + r0);
    r3 = r30;
    // inline leaf 0x80591314 (12 guest instruction(s))
}

loc_inl0_0x80591314:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2);
}

loc_inl0_0x80591328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8059132C:
{
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r4 & 524288);
    r0_mrot_1 = (r4 & 24576);
    r0_mdest_1 = (r0 & -24577);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_inl0_0x80591338:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8059133C:
{
    r3 = 0;
    goto loc_inl0_cont_80591314;
}

loc_inl0_return:
{
}

loc_inl0_cont_80591314:
{
    // end of inlined leaf 0x80591314
}

loc_807A5E14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807A5E24;
    }
}

loc_807A5E18:
{
    r0 = MemoryInline::FlatRead32((r30 + 576));
}

loc_807A5E20:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807A5E28;
    }
}

loc_807A5E24:
{
    r31 = 1;
}

loc_807A5E28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807A5E2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A5E84;
    }
}

loc_807A5E30:
{
    r4 = MemoryInline::FlatRead8((r28 + 484));
}

loc_807A5E38:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(12))) {
        goto loc_807A5E5C;
    }
}

loc_807A5E3C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = r3;
    r3 = (r28 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8019ADE0u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    MemoryInline::FlatWriteFloat32((r28 + 488), f1.d);
}

loc_807A5E5C:
{
    r3 = r30;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = r3;
    r3 = (r28 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8019ADE0u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r28 + 488));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A5E78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A5E84;
    }
}

loc_807A5E7C:
{
    MemoryInline::FlatWrite8((r28 + 484), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteFloat32((r28 + 488), f1.d);
}

loc_807A5E84:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A5D88 func_807A5D88 preserves=true fpr_mask=0x00000000
