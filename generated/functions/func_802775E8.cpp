#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802775E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r14_rot_0 = 0;
    uint32_t r14_rot_1 = 0;
    uint32_t r18_mdest_0 = 0;
    uint32_t r18_mrot_0 = 0;
    uint32_t r18_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802775E8;

loc_802775E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + 28820), 0, 3900u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::FlatRead32((r13 + 27136));
    r0 = MemoryInline::FlatRead32((r13 + 25800));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::FlatRead32((r13 + 27304));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + 28820));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 1504u, (r13 + 30324));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 2484u, (r13 + 31304));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3408u, (r13 + 32228));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::FlatRead32((r13 + 28304));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 3896u, (r13 + 32716));
    r0 = MemoryInline::FlatRead32((r13 + 27136));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[18] = r18;
    ctx->gpr[26] = r26;
    ctx->cr = cr;
    ctx->xer = xer;
    OSSystemCall();
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    cr = ctx->cr;
    xer = ctx->xer;
    r14_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r14 = (r14_rot_0 & 8380416);
}

loc_80277640:
{
    r15 = (r27 | 26478);
    r26 = (r11 ^ 25956);
    r1 = (8274 - r26);
    r3 = (r11 | 1701380096);
    r5 = (r19 & 1679818752);
}

loc_80277654:
{
    r18_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(6));
    r18_mrot_0 = (r18_rot_0 & 16744448);
    r18_mdest_0 = (r18 & -16744449);
    r18 = (r18_mdest_0 | r18_mrot_0);
    r1 = (r3 | 1952514048);
}

loc_80277660:
{
    r1 = (26983 - r0);
    r15 = (r19 ^ 1919221760);
    r3 = (29234 - r17);
    r3 = (25971 - r13);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(25971) >= static_cast<uint32_t>(r13) ? 1u : 0u) << 29);
    r1 = (r27 & 26469);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r1), static_cast<int32_t>(0));
}

loc_80277674:
{
    SetCRResident(cr, xer, 4, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_80277678:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[18] = r18;
    ctx->gpr[26] = r26;
    ctx->cr = cr;
    ctx->xer = xer;
    OSSystemCall();
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    cr = ctx->cr;
    xer = ctx->xer;
    r14_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r14 = (r14_rot_1 & 8380416);
}

loc_80277680:
{
    r15 = (r27 | 26478);
    r26 = (r11 ^ 25956);
    r1 = (8274 - r26);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8274) >= static_cast<uint32_t>(r26) ? 1u : 0u) << 29);
    r3 = (r11 | 1701380096);
    r5 = (r19 & 1679818752);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80277694:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[18] = r18;
    ctx->gpr[26] = r26;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802775E8 func_802775E8 preserves=true fpr_mask=0x00000000
