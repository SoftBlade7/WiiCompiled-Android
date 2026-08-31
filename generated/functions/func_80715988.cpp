#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80715988(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80715988;

loc_80715988:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80715994:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80715A34;
    }
}

loc_807159A8:
{
    r3 = 0x809C0000u;
    r31 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B378 (8 guest instruction(s))
}

loc_inl0_0x8061B378:
{
}

loc_inl0_0x8061B37C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl0_0x8061B388;
    }
}

loc_inl0_0x8061B380:
{
    r3 = 0;
    goto loc_inl0_cont_8061B378;
}

loc_inl0_0x8061B388:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_inl0_cont_8061B378:
{
    // end of inlined leaf 0x8061B378
}

loc_807159C0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(785))) {
        goto loc_807159EC;
    }
}

loc_807159C4:
{
}

loc_807159C8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(529))) {
        goto loc_807159E0;
    }
}

loc_807159CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(276));
}

loc_807159D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715A28;
    }
}

loc_807159D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(273));
}

loc_807159D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715A0C;
    }
}

loc_807159DC:
{
    goto loc_80715A28;
}

loc_807159E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(532));
}

loc_807159E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715A28;
    }
}

loc_807159E8:
{
    goto loc_80715A14;
}

loc_807159EC:
{
}

loc_807159F0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1041))) {
        goto loc_80715A00;
    }
}

loc_807159F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(788));
}

loc_807159F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715A28;
    }
}

loc_807159FC:
{
    goto loc_80715A1C;
}

loc_80715A00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1044));
}

loc_80715A04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80715A28;
    }
}

loc_80715A08:
{
    goto loc_80715A24;
}

loc_80715A0C:
{
    r31 = (r31 | 2);
    goto loc_80715A28;
}

loc_80715A14:
{
    r31 = (r31 | 4);
    goto loc_80715A28;
}

loc_80715A1C:
{
    r31 = (r31 | 8);
    goto loc_80715A28;
}

loc_80715A24:
{
    r31 = (r31 | 16);
}

loc_80715A28:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x80715A34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80715A34:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800203F gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0xC0000003 fpr_write=0xC0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80715988 func_80715988 preserves=true fpr_mask=0x00000000
