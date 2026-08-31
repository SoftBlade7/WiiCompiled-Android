#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EFC3C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EFC3C;

loc_801EFC3C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_801EFC64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801EFCA0;
    }
}

loc_801EFC68:
{
    r31 = MemoryInline::FlatRead32(r3);
    goto loc_801EFC88;
}

loc_801EFC70:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x801EF3C0 (6 guest instruction(s))
}

loc_inl0_0x801EF3C0:
{
}

loc_inl0_0x801EF3C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(97))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3C8:
{
}

loc_inl0_0x801EF3CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(122))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3D0:
{
    r3 = (r3 + -32);
    goto loc_inl0_cont_801EF3C0;
}

loc_inl0_return:
{
}

loc_inl0_cont_801EF3C0:
{
    // end of inlined leaf 0x801EF3C0
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    r30 = (r30 + 1);
    r31 = (r31 + 1);
    r29 = (r29 + -1);
}

loc_801EFC88:
{
    r0 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EFC8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EFD04;
    }
}

loc_801EFC90:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EFC70;
    }
}

loc_801EFC9C:
{
    goto loc_801EFD04;
}

loc_801EFCA0:
{
    r4 = MemoryInline::FlatRead32(r3);
    goto loc_801EFCE4;
}

loc_801EFCA8:
{
}

loc_801EFCAC:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(97))) {
        goto loc_801EFCC0;
    }
}

loc_801EFCB4:
{
}

loc_801EFCB8:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(122))) {
        goto loc_801EFCC0;
    }
}

loc_801EFCBC:
{
    r0 = 1;
}

loc_801EFCC0:
{
}

loc_801EFCC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EFCCC;
    }
}

loc_801EFCC8:
{
    r3 = (r3 + -32);
}

loc_801EFCCC:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    r4 = (r4 + 2);
    r29 = (r29 + -1);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r30 = (r30 + 2);
}

loc_801EFCE4:
{
    r0 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EFCE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EFCF8;
    }
}

loc_801EFCEC:
{
    r3 = MemoryInline::FlatRead16(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EFCF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801EFCA8;
    }
}

loc_801EFCF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r30 = (r30 + 1);
}

loc_801EFD04:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EFC3C func_801EFC3C preserves=true fpr_mask=0x00000000
