#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078D61C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8078D61C;

loc_8078D61C:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 6392));
    r4 = r31;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590678 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80590678
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078D648:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078D654;
    }
}

loc_8078D64C:
{
    r3 = 1;
    goto loc_8078D770;
}

loc_8078D654:
{
    r3 = 0x809C0000u;
    r7 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r8 = 0x808B0000u;
    r8 = (r8 + 11588);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r1 + 24);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 11u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 18), static_cast<uint8_t>(r7));
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 12), static_cast<uint16_t>(r7));
    r4 = MemoryInline::FlatRead32((r4 + 64));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 14), static_cast<uint8_t>(r7));
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r5 = MemoryInline::FlatRead8((r4 + 6));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 16), static_cast<uint16_t>(r7));
    r4 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r8);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r1 + 12), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 16), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 18), static_cast<uint8_t>(r0));
    ctx->lr = 0x8078D6B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 3084));
    ctx->lr = 0x8078D6C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 18));
    r3 = MemoryInline::FlatRead16((r1 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078D6D4:
{
    r4 = MemoryInline::FlatRead8((r1 + 194));
    r5 = MemoryInline::FlatRead16((r1 + 196));
    r0 = MemoryInline::FlatRead8((r1 + 198));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078D6EC;
    }
}

loc_8078D6E4:
{
    r0 = 0;
    goto loc_8078D744;
}

loc_8078D6EC:
{
}

loc_8078D6F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8078D6FC;
    }
}

loc_8078D6F4:
{
    r0 = 1;
    goto loc_8078D744;
}

loc_8078D6FC:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8078D704:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8078D710;
    }
}

loc_8078D708:
{
    r0 = 1;
    goto loc_8078D744;
}

loc_8078D710:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078D740;
    }
}

loc_8078D714:
{
    r0 = MemoryInline::FlatRead8((r1 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8078D71C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8078D728;
    }
}

loc_8078D720:
{
    r0 = 1;
    goto loc_8078D744;
}

loc_8078D728:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078D740;
    }
}

loc_8078D72C:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_8078D734:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r5))) {
        goto loc_8078D740;
    }
}

loc_8078D738:
{
    r0 = 1;
    goto loc_8078D744;
}

loc_8078D740:
{
    r0 = 0;
}

loc_8078D744:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078D748:
{
    r31 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078D754;
    }
}

loc_8078D750:
{
    r31 = 0;
}

loc_8078D754:
{
    r4 = 0x80520000u;
    r3 = (r1 + 128);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x8078D76Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
}

loc_8078D770:
{
    r0 = MemoryInline::FlatRead32((r1 + 260));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078D61C func_8078D61C preserves=true fpr_mask=0x00000000
