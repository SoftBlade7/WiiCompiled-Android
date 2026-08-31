#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80525334(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r4_addic_src_3 = 0;
    uint32_t r4_addic_src_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80525334;

loc_80525334:
{
    r5 = MemoryInline::FlatRead8((r3 + 28));
    r0 = 0;
    r4 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80525340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052548C;
    }
}

loc_80525344:
{
    r4 = (r5 & 1);
}

loc_80525348:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052542C;
    }
}

loc_8052534C:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead8(r4);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80525380;
    }
}

loc_8052535C:
{
    r4 = (r5 & 16);
}

loc_80525360:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80525370;
    }
}

loc_80525364:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_805253F4;
}

loc_80525370:
{
    r4 = MemoryInline::FlatRead8((r3 + 28));
    r4 = (r4 & -9);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    goto loc_805253F4;
}

loc_80525380:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r6 = 1;
    r4 = MemoryInline::FlatRead8(r5);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80525394:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(42))) {
        goto loc_805253B4;
    }
}

loc_80525398:
{
}

loc_8052539C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(47))) {
        goto loc_805253BC;
    }
}

loc_805253A0:
{
}

loc_805253A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(48))) {
        goto loc_805253C4;
    }
}

loc_805253A8:
{
}

loc_805253AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(49))) {
        goto loc_805253D8;
    }
}

loc_805253B0:
{
    goto loc_805253EC;
}

loc_805253B4:
{
    r0 = 1;
    goto loc_805253EC;
}

loc_805253BC:
{
    r0 = 2;
    goto loc_805253EC;
}

loc_805253C4:
{
    r4 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    r6 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_805253EC;
}

loc_805253D8:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805253E0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805253E8;
    }
}

loc_805253E4:
{
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_805253E8:
{
    r6 = 0;
}

loc_805253EC:
{
}

loc_805253F0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80525380;
    }
}

loc_805253F4:
{
    r4 = MemoryInline::FlatRead8((r3 + 28));
    r4 = (r4 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805253FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052541C;
    }
}

loc_80525400:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r4_addic_src_1 = r4;
    r4 = (r4_addic_src_1 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80525408:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8052541C;
    }
}

loc_80525410:
{
    r4 = MemoryInline::FlatRead8((r3 + 28));
    r4 = (r4 & -9);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
}

loc_8052541C:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    goto loc_80525490;
}

loc_8052542C:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -700));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80525448:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80525460;
    }
}

loc_80525450:
{
    r4 = 0x80890000u;
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -704));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
}

loc_80525460:
{
    r4 = MemoryInline::FlatRead8((r3 + 28));
    r4 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80525468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80525490;
    }
}

loc_8052546C:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r4_addic_src_3 = r4;
    r4 = (r4_addic_src_3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80525474:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80525490;
    }
}

loc_8052547C:
{
    r4 = MemoryInline::FlatRead8((r3 + 28));
    r4 = (r4 & -9);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    goto loc_80525490;
}

loc_8052548C:
{
    r0 = 3;
}

loc_80525490:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80525334 func_80525334 preserves=true fpr_mask=0x00000000
