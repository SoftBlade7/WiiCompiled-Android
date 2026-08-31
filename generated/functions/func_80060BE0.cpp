#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060BE0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80060BE0;

loc_80060BE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    // inline leaf 0x80170C90 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80170C90
    r31 = r3;
    r3 = r29;
    // inline leaf 0x80170CB0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 31));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80170CB0
    r0 = (r31 + -8);
}

loc_80060C18:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80060C48;
    }
}

loc_80060C1C:
{
}

loc_80060C20:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(6))) {
        goto loc_80060C6C;
    }
}

loc_80060C24:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80060C28:
{
    r3 = 0x802B0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r3 = (r3 + 31728);
    r4 = (r3 + r0);
    r3 = (r4 + 512);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060C88;
    }
}

loc_80060C40:
{
    r3 = (r4 + 640);
    goto loc_80060C88;
}

loc_80060C48:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80060C4C:
{
    r3 = 0x802B0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r3 + 31728);
    r4 = (r3 + r0);
    r3 = (r4 + 256);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060C88;
    }
}

loc_80060C64:
{
    r3 = (r4 + 384);
    goto loc_80060C88;
}

loc_80060C6C:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80060C70:
{
    r3 = 0x802B0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + 31728);
    r3 = (r3 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060C88;
    }
}

loc_80060C84:
{
    r3 = (r3 + 128);
}

loc_80060C88:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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

// RECOMP_GUEST_ABI gpr_read=0xE000001A gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80060BE0 func_80060BE0 preserves=true fpr_mask=0x00000000
