#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008D8E0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008D8E0;

loc_8008D8E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8008D8FC:
{
    r5 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008D918;
    }
}

loc_8008D904:
{
}

loc_8008D908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8008D920;
    }
}

loc_8008D90C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8008D910:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008D994;
    }
}

loc_8008D914:
{
    goto loc_8008D9E8;
}

loc_8008D918:
{
    r5 = r4;
    goto loc_8008D9E8;
}

loc_8008D920:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + 8);
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl0_0x800AD0B0:
{
}

loc_inl0_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008D938:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D944;
    }
}

loc_8008D93C:
{
    r3 = 0;
    goto loc_8008D9EC;
}

loc_8008D944:
{
    r5 = 0;
    goto loc_8008D968;
}

loc_8008D950:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8008D95C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008D968;
    }
}

loc_8008D960:
{
    r3 = 0;
    goto loc_8008D9EC;
}

loc_8008D968:
{
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8008D974:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8008D950;
    }
}

loc_8008D978:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r0 = (r3 + r0);
    r3 = (r4 + 4);
    r3 = (r3 & -4);
    r5 = (r3 + r0);
    goto loc_8008D9E8;
}

loc_8008D994:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead8(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + 8);
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl1_0x800AD0B0:
{
}

loc_inl1_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x800AD0C0;
    }
}

loc_inl1_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl1_cont_800AD0B0;
}

loc_inl1_return:
{
}

loc_inl1_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008D9AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008D9B8;
    }
}

loc_8008D9B0:
{
    r3 = 0;
    goto loc_8008D9EC;
}

loc_8008D9B8:
{
    r4 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r4));
}

loc_8008D9C0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008D9D0;
    }
}

loc_8008D9C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r0));
}

loc_8008D9CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8008D9D8;
    }
}

loc_8008D9D0:
{
    r3 = 0;
    goto loc_8008D9EC;
}

loc_8008D9D8:
{
    r0 = (r31 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + r0);
    r5 = (r3 + 4);
}

loc_8008D9E8:
{
    r3 = r5;
}

loc_8008D9EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008D8E0 func_8008D8E0 preserves=true fpr_mask=0x00000000
