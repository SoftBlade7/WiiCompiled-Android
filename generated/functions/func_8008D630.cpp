#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008D630(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008D630;

loc_8008D630:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008D654:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D660;
    }
}

loc_8008D658:
{
    r3 = 0;
    goto loc_8008D724;
}

loc_8008D660:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008D664:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008D678;
    }
}

loc_8008D668:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8008D674:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008D680;
    }
}

loc_8008D678:
{
    r3 = 0;
    goto loc_8008D724;
}

loc_8008D680:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r6 + r0);
    r4 = (r4 + 12);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8008D694:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D6A0;
    }
}

loc_8008D698:
{
    r3 = 0;
    goto loc_8008D724;
}

loc_8008D6A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8008D6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008D6C0;
    }
}

loc_8008D6A8:
{
    ctx->lr = 0x8008D6ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008D8E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008D6B0:
{
    r4 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D6C0;
    }
}

loc_8008D6B8:
{
    r3 = 0;
    goto loc_8008D724;
}

loc_8008D6C0:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8008D6C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D6D4;
    }
}

loc_8008D6CC:
{
    r3 = 0;
    goto loc_8008D724;
}

loc_8008D6D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8008D6D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008D6FC;
    }
}

loc_8008D6DC:
{
    r3 = r30;
    r5 = r31;
    ctx->lr = 0x8008D6E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008D8E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008D6EC:
{
    r4 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D6FC;
    }
}

loc_8008D6F4:
{
    r3 = 0;
    goto loc_8008D724;
}

loc_8008D6FC:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8008D704:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008D710;
    }
}

loc_8008D708:
{
    r3 = 0;
    goto loc_8008D724;
}

loc_8008D710:
{
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + 8);
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl0_0x800AD0B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl0_0x800AD0B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800AD0C0;
    }
}

loc_inl0_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
}

loc_8008D724:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008D630 func_8008D630 preserves=true fpr_mask=0x00000000
