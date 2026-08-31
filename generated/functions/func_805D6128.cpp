#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D6128(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805D6128;

loc_805D6128:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4524));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D6148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D6378;
    }
}

loc_805D614C:
{
    r4 = 458162176;
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 + -32331);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 300);
    r0 = (r5 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D6378;
    }
}

loc_805D6174:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x805D6188u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805D2A50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = MemoryInline::FlatRead32((r30 + 4360));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D28C8 (14 guest instruction(s))
}

loc_inl0_0x805D28C8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
}

loc_inl0_0x805D28CC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_0x805D28F8;
    }
}

loc_inl0_0x805D28D0:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x805D28F0;
    }
}

loc_inl0_0x805D28E8:
{
    r3 = MemoryInline::FlatRead32((r4 + 464));
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F0:
{
    r3 = -1;
    goto loc_inl0_cont_805D28C8;
}

loc_inl0_0x805D28F8:
{
    r3 = -1;
}

loc_inl0_cont_805D28C8:
{
    // end of inlined leaf 0x805D28C8
    r31 = r3;
    r3 = (r30 + 1068);
    r4 = r31;
    ctx->lr = 0x805D61ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805D56ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 4524));
    r0 = (r3 + -21);
}

loc_805D61B8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D61C4;
    }
}

loc_805D61BC:
{
}

loc_805D61C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_805D61CC;
    }
}

loc_805D61C4:
{
    r0 = 1;
    goto loc_805D61D0;
}

loc_805D61CC:
{
    r0 = 0;
}

loc_805D61D0:
{
}

loc_805D61D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805D623C;
    }
}

loc_805D61D8:
{
    r0 = (r31 + -21);
}

loc_805D61E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D61EC;
    }
}

loc_805D61E4:
{
}

loc_805D61E8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_805D61F4;
    }
}

loc_805D61EC:
{
    r0 = 1;
    goto loc_805D61F8;
}

loc_805D61F4:
{
    r0 = 0;
}

loc_805D61F8:
{
}

loc_805D61FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805D623C;
    }
}

loc_805D6200:
{
    r0 = (r31 + -21);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_805D6208:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805D6228;
    }
}

loc_805D620C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_805D6210:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D629C;
    }
}

loc_805D6214:
{
    r3 = r30;
    r4 = 62;
    r5 = 0;
    ctx->lr = 0x805D6224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805D629C;
}

loc_805D6228:
{
    r3 = r30;
    r4 = 61;
    r5 = 0;
    ctx->lr = 0x805D6238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805D629C;
}

loc_805D623C:
{
    r0 = (r3 + -21);
}

loc_805D6244:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D6250;
    }
}

loc_805D6248:
{
}

loc_805D624C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_805D6258;
    }
}

loc_805D6250:
{
    r0 = 1;
    goto loc_805D625C;
}

loc_805D6258:
{
    r0 = 0;
}

loc_805D625C:
{
}

loc_805D6260:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805D629C;
    }
}

loc_805D6264:
{
    r0 = (r31 + -21);
}

loc_805D626C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D6278;
    }
}

loc_805D6270:
{
}

loc_805D6274:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_805D6280;
    }
}

loc_805D6278:
{
    r0 = 1;
    goto loc_805D6284;
}

loc_805D6280:
{
    r0 = 0;
}

loc_805D6284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D6288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D629C;
    }
}

loc_805D628C:
{
    r3 = r30;
    r4 = 63;
    r5 = -1;
    ctx->lr = 0x805D629Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80602CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805D629C:
{
    r0 = (r31 + -21);
}

loc_805D62A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D62B0;
    }
}

loc_805D62A8:
{
}

loc_805D62AC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_805D62B8;
    }
}

loc_805D62B0:
{
    r0 = 1;
    goto loc_805D62BC;
}

loc_805D62B8:
{
    r0 = 0;
}

loc_805D62BC:
{
}

loc_805D62C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805D62FC;
    }
}

loc_805D62C4:
{
    r3 = MemoryInline::FlatRead32((r30 + 4524));
    r0 = (r3 + -21);
}

loc_805D62D0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D62DC;
    }
}

loc_805D62D4:
{
}

loc_805D62D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_805D62E4;
    }
}

loc_805D62DC:
{
    r0 = 1;
    goto loc_805D62E8;
}

loc_805D62E4:
{
    r0 = 0;
}

loc_805D62E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D62EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D62FC;
    }
}

loc_805D62F0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 3000), static_cast<uint8_t>(r0));
    goto loc_805D6374;
}

loc_805D62FC:
{
    r0 = (r31 + -21);
}

loc_805D6304:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D6310;
    }
}

loc_805D6308:
{
}

loc_805D630C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_805D6318;
    }
}

loc_805D6310:
{
    r0 = 1;
    goto loc_805D631C;
}

loc_805D6318:
{
    r0 = 0;
}

loc_805D631C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D6320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D6374;
    }
}

loc_805D6324:
{
    r3 = MemoryInline::FlatRead32((r30 + 4524));
    r0 = (r3 + -21);
}

loc_805D6330:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805D633C;
    }
}

loc_805D6334:
{
}

loc_805D6338:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_805D6344;
    }
}

loc_805D633C:
{
    r0 = 1;
    goto loc_805D6348;
}

loc_805D6344:
{
    r0 = 0;
}

loc_805D6348:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805D634C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805D6374;
    }
}

loc_805D6350:
{
    r3 = (r30 + 1068);
    ctx->lr = 0x805D6358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805BDF44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805D635C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D636C;
    }
}

loc_805D6360:
{
    r3 = (r30 + 2260);
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x805BDB44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
}

loc_805D636C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 3000), static_cast<uint8_t>(r0));
}

loc_805D6374:
{
    MemoryInline::FlatWrite32((r30 + 4524), r31);
}

loc_805D6378:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D6128 func_805D6128 preserves=true fpr_mask=0x00000000
