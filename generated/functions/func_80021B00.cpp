#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80021B00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80021B00;

loc_80021B00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r5 = (r5_rot_0 & 2047);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(1023));
}

loc_80021B18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80021B28;
    }
}

loc_80021B1C:
{
    r3 = 0;
    r4 = 0;
    goto loc_80021BA0;
}

loc_80021B28:
{
    r6 = (r3 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80021B2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80021B1C;
    }
}

loc_80021B30:
{
    r3 = (r3 & 1048575);
    r3 = (r3 | 1048576);
    r5 = (r5 + -1075);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80021B40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80021B6C;
    }
}

loc_80021B44:
{
    r5 = (0 - r5);
    r8 = (32 - r5);
    r9 = (r5 + -32);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(-32)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r10 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r8));
    r4 = (r4 | r10);
    r10 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
    r4 = (r4 | r10);
    r3 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    goto loc_80021BA0;
}

loc_80021B6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(11));
}

loc_80021B70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80021B80;
    }
}

loc_80021B74:
{
    r3 = -1;
    r4 = -1;
    goto loc_80021BA0;
}

loc_80021B80:
{
    r8 = (32 - r5);
    r9 = (r5 + -32);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(-32)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80021BA0:
{
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000077A gpr_write=0x0000077A gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80021B00 func_80021B00 preserves=true fpr_mask=0x00000000
