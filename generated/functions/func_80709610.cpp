#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80709610(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80709610;

loc_80709610:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 128), 0, 106u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 104u, (r3 + 232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070962C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709810;
    }
}

loc_80709630:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 105u, (r3 + 233));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80709638:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80709810;
    }
}

loc_8070963C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 52u, (r3 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80709644:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80709810;
    }
}

loc_80709648:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 184));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80709654:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709810;
    }
}

loc_80709658:
{
    r0 = 13;
    r6 = 358;
    ctr = r0;
}

loc_80709664:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80709670:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709694;
    }
}

loc_80709674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709680;
    }
}

loc_80709678:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80709684;
}

loc_80709680:
{
    r0 = -1;
}

loc_80709684:
{
}

loc_80709688:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80709694;
    }
}

loc_8070968C:
{
    r4 = (r3 + 128);
    goto loc_80709714;
}

loc_80709694:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070969C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807096C0;
    }
}

loc_807096A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807096AC;
    }
}

loc_807096A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_807096B0;
}

loc_807096AC:
{
    r0 = -1;
}

loc_807096B0:
{
}

loc_807096B4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_807096C0;
    }
}

loc_807096B8:
{
    r4 = (r3 + 132);
    goto loc_80709714;
}

loc_807096C0:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807096C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807096EC;
    }
}

loc_807096CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807096D8;
    }
}

loc_807096D0:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_807096DC;
}

loc_807096D8:
{
    r0 = -1;
}

loc_807096DC:
{
}

loc_807096E0:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_807096EC;
    }
}

loc_807096E4:
{
    r4 = (r3 + 136);
    goto loc_80709714;
}

loc_807096EC:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807096F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709714;
    }
}

loc_807096F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709704;
    }
}

loc_807096FC:
{
    r0 = MemoryInline::FlatRead32((r5 + 144));
    goto loc_80709708;
}

loc_80709704:
{
    r0 = -1;
}

loc_80709708:
{
}

loc_8070970C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80709714;
    }
}

loc_80709710:
{
    r4 = (r3 + 140);
}

loc_80709714:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80709718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80709810;
    }
}

loc_8070971C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80709664;
    }
}

loc_80709724:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 220));
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    r3 = 0x808A0000u;
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 5968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070973C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80709810;
    }
}

loc_80709740:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 300));
    ctr = r12;
    ctx->lr = 0x80709754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80709758:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709810;
    }
}

loc_80709760:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(380));
}

loc_80709764:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807097F8;
    }
}

loc_80709768:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f0.d = PPC_Fctiwz(f1.d);
    r0 = MemoryInline::FlatRead16((r31 + 214));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r3 = fctiwzword0;
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r31 + 214), static_cast<uint16_t>(r0));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80709794:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(460))) {
        goto loc_807097A8;
    }
}

loc_80709798:
{
    r0 = (r3 + -460);
    MemoryInline::FlatWrite16((r31 + 214), static_cast<uint16_t>(r0));
    r4 = 1;
    goto loc_807097BC;
}

loc_807097A8:
{
}

loc_807097AC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-460))) {
        goto loc_807097BC;
    }
}

loc_807097B0:
{
    r0 = (r3 + 460);
    MemoryInline::FlatWrite16((r31 + 214), static_cast<uint16_t>(r0));
    r4 = 1;
}

loc_807097BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807097C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709810;
    }
}

loc_807097C4:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 213));
    r5 = (r31 + 200);
    r12 = MemoryInline::FlatRead32((r12 + 240));
    r4 = (r4 + 380);
    ctr = r12;
    ctx->lr = 0x807097E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 213));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r31 + 213), static_cast<uint8_t>(r0));
    goto loc_80709810;
}

loc_807097F8:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r5 = (r31 + 200);
    r12 = MemoryInline::FlatRead32((r12 + 248));
    ctr = r12;
    ctx->lr = 0x80709810u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80709810:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80709610 func_80709610 preserves=true fpr_mask=0x00000000
